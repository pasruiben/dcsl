--===========================================================================--
--
--  S Y N T H E Z I A B L E    miniUART   C O R E
--
--  www.OpenCores.Org - January 2000
--  This core adheres to the GNU public license  
--
-- Design units   : miniUART core for the OCRP-1
--
-- File name      : TxUnit.vhd
--
-- Purpose        : Implements an miniUART device for communication purposes 
--                  between the OR1K processor and the Host computer through
--                  an RS-232 communication protocol.
--                  
-- Library        : uart_lib.vhd
--
-- Dependencies   : IEEE.Std_Logic_1164
--
--===========================================================================--
-------------------------------------------------------------------------------
-- Revision list
-- Version   Author                 Date                        Changes
--
-- 0.1      Ovidiu Lupas       15 January 2000                 New model
-- 2.0      Ovidiu Lupas       17 April   2000    unnecessary variable removed
--  olupas@opencores.org
-------------------------------------------------------------------------------
-- Description    : 
-------------------------------------------------------------------------------
-- Code re-written by Osman Allam on 22 November 2005
-------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity TxUnit is
  port (
     Clk    : in  Std_Logic;  -- Clock signal
     Reset  : in  Std_Logic;  -- Reset input
     Enable : in  Std_Logic;  -- Enable input
     Load   : in  Std_Logic;  -- Load transmit data
     TxD    : out Std_Logic;  -- RS-232 data output
     TRegE  : out Std_Logic;  -- Tx register empty
     TBufE  : out Std_Logic;  -- Tx buffer empty
     DataO  : in  Std_Logic_Vector(7 downto 0));
end entity;

architecture Behaviour of TxUnit is
  signal TBuff    : Std_Logic_Vector(7 downto 0); -- transmit buffer
  signal TReg     : Std_Logic_Vector(7 downto 0); -- transmit register
  signal BitCnt   : Unsigned(3 downto 0);         -- bit counter
  signal tmpTRegE : Std_Logic;                    -- 
  signal tmpTBufE : Std_Logic;                    --
begin
  -- Implements the Tx unit
  process(Reset, Clk)
    variable tmp_TRegE : Std_Logic;
    constant CntOne    : Unsigned(3 downto 0):="0001";
  begin
    if (Reset = '1') then
      tmpTRegE <= '1';
      tmpTBufE <= '1';
      TxD <= '1'; -- idle
      BitCnt <= (others => '0');
      TBuff <= (others => '0');
      TReg <= (others => '0');
    elsif Rising_Edge(Clk) then
      if Load = '1' then
        TBuff <= DataO;
        tmpTBufE <= '0';
      elsif Enable = '1' then
        if (tmpTBufE = '0') and (tmpTRegE = '1') then
          TReg <= TBuff;
          tmpTRegE <= '0';
          tmpTBufE <= '1';
        end if;
        
        if tmpTRegE = '0' then
          case BitCnt is
          when "0000" =>
            TxD <= '0'; -- start bit
            BitCnt <= BitCnt + CntOne;                         
          when "0001" | "0010" | "0011" |
          "0100" | "0101" | "0110" |
          "0111" | "1000" =>
            TxD <= TReg(0);
            TReg <= '1' & TReg(7 downto 1);
            BitCnt <= BitCnt + CntOne;
          when "1001" =>
            TxD <= '1'; -- stop bit
--             TReg <= '1' & TReg(7 downto 1);
            BitCnt <= (others => '0');
            tmpTRegE <= '1';
          when others =>
            null;
          end case;
        end if;
      end if;
    end if;
  end process;

  TRegE <= tmpTRegE;
  TBufE <= tmpTBufE;
end architecture;