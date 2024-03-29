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
 -- File           : memory.vhd
 -----------------------------------------------------------------------------
 -- Description    : 
 -- --------------------------------------------------------------------------
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
use IEEE.numeric_std.all;

use WORK.micro_pk.all;
use WORK.micro_ram_pk.all;

entity memory is
  port (
    clk     : in std_logic;
    inBus   : in std_logic_Vector (DATA_WIDTH - 1 downto 0);
    addr    : in std_logic_vector (ADDR_WIDTH - 1 downto 0);
    rd      : in std_logic;
    wr      : in std_logic; 
    outBus  : out std_logic_Vector (DATA_WIDTH - 1 downto 0);
    ready   : out std_logic);
end entity;


architecture behave of memory is 
  signal complete : std_logic;
   
begin
  ready <= (not wr and not rd) or complete;
  ram: process (clk)
  -- declare a variable for the memory contents:
  -- type = memContents_t
  -- size = max. addressable spacea allowed by the width of the address port
  -- initialize it with the constant RAM_CONTENTS
  -- * NOTE: Initial values are used for simulation, they will be ignored in 
  -- synthesis.  
  -- ADD CODE

  variable contenido : memContents_t (  0 to 2**ADDR_WIDTH -1 ) := RAM_CONTENTS; 
  
  -- END ADD CODE
  
  begin
    if rising_edge (clk) then
      complete <= '0';
      -- provide a condition that resembles enabling the memory module
      if (rd = '1' or wr = '1') then   -- add code here
        if (wr = '1') then -- add code here                    -- writing
          -- data is stored in memory location pointed to by 'addr'
          -- ADD CODE
          contenido(to_integer(unsigned(addr))) := inBus;
		  -- END ADD CODE
          complete <= '1';
        else                                                -- reading 
          -- data is read from memory location pointed to by 'addr'
          -- ADD CODE
          outBus <= contenido(to_integer(unsigned(addr)));
		  -- END ADD CODE
          complete <= '1';
        end if;
      end if;
    end if;
  end process;
end architecture;
          

    
  
  
    
    
  
