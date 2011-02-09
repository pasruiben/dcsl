 -----------------------------------------------------------------------------
 -- Copyright (C) 2005 IMEC                                                  -
 --                                                                          -
 -- Redistribution and use in source and binary forms, with or without       -
 -- modification, are permitted provided that the following conditions       -
 -- are met:                                                                 -
 --                                                                          -
 -- 1. Redistributions of source code must retain the above copyright        -
 --    notice, this list of conditions and the following disclaimer.         -
 --                                                                          -
 -- 2. Redistributions in binary form must reproduce the above               -
 --    copyright notice, this list of conditions and the following           -
 --    disclaimer in the documentation and/or other materials provided       -
 --    with the distribution.                                                -
 --                                                                          -
 -- 3. Neither the name of the author nor the names of contributors          -
 --    may be used to endorse or promote products derived from this          -
 --    software without specific prior written permission.                   -
 --                                                                          -
 -- THIS CODE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS''           -
 -- AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED        -
 -- TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A          -
 -- PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR       -
 -- CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,             -
 -- SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT         -
 -- LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF         -
 -- USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND      -
 -- ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,       -
 -- OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT       -
 -- OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF       -
 -- SUCH DAMAGE.                                                             -
 --                                                                          -
 -----------------------------------------------------------------------------
 -----------------------------------------------------------------------------
 -- File           : fetch.vhd
 -- -----------------------------------------------------------------------------
 -- Description : Fetch unit reads the next instruction from memory and makes it
 -- available in the instruction register
 --------------------------------------------------------------------------------
 -- Author         : Osman Allam
 -- Date           : 07/02/2006
 -- Version        : 1.0
 -- Change history : 
 ----------------------------------------------------------------------------- 
 -- This code was developed by Osman Allam during an internship at IMEC, 
 -- in collaboration with Geert Vanwijnsberghe, Tom Tassignon en Steven 
 -- Redant. The purpose of this code is to teach students good VHDL coding
 -- style for writing complex behavioural models.
 -----------------------------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;

use WORK.micro_pk.all;

entity fetch is
  port (
    rst       : in std_logic;
    clk       : in std_logic;
    memReady  : in std_logic;
    readInstr : in std_logic; -- fetch next instruction (from control unit)
    memData   : in std_logic_vector (31 downto 0);
    vldInstr  : out std_logic; -- valid instruction
    PCinc     : out std_logic;
    memRd     : out std_logic;
    IR        : out std_logic_vector (31 downto 0));
end entity;

architecture moore of fetch is
  -- declare a new type for the states
  type FetchState is (idle,reading,incPC);
  
  -- declare signals for current state (and next state)
  signal currentState : FetchState;
	signal nextState		: FetchState;

  -- Instruction register enable  
  signal IR_iEn : std_logic;
  
begin

  -- Write the code of the FSM here
	
	process (rst, clk)
	begin
		if (rst = '1') then
			currentState <= idle;
		elsif (clk = '1' and clk'event) then
			currentState <= nextState;
		end if;
	end process;  

	process (memReady, ReadInstr, currentState)
	begin
		if (currentState = idle) then
			if (readInstr = '1') then
				nextState <= reading;
			else
				nextState <= idle;
			end if;
		elsif (currentState = reading) then
			if (memReady = '1') then 
				nextState <= incPC;
			else
				nextState <= reading;
			end if;
		else
			if (readInstr = '1') then
				nextState <= reading;
			else
				nextState <= idle;
			end if;
		end if;
	end process;
  
	process (vldInstr, PCinc, memRd, IR_iEn, currentState)
	begin
		if (currentState = idle) then
			PCinc <= '0';
			vldInstr <= '1';
			memRd <= '0';
			IR_iEn <= '0';				
		elsif (currentState = reading) then
			PCinc <= '0';
			vldInstr <= '0';
			memRd <= '1';
			IR_iEn <= '0';
		else
			PCinc <= '1';
			vldInstr <= '1';
			memRd <= '0';
			IR_iEn <= '1';
		end if;
	end process;

  -- Instruction register  
  process (rst, clk)
  begin
    if (rst = '1') then
      IR <= (IR'range => '0');
    elsif rising_edge (clk) then
      if (IR_iEn = '1') then
        IR      <= memData;
      end if;
    end if;
  end process;
   
end architecture;
