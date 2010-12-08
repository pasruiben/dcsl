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
-- -----------------------------------------------------------------------------
-- Project     : Micro6 microprocessor
-- Author      : Osman Allam
-- File        : main_mem.vhd
-- Design      : Wrapper for the memory block generated by CoreGen
--------------------------------------------------------------------------------
-- Description : 
-- -----------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use work.micro_pk.all;
use work.micro_comp_pk.all;

entity main_mem is
	port (
  	addr: IN std_logic_VECTOR(11 downto 0);
  	clk: IN std_logic;
  	din: IN std_logic_VECTOR(31 downto 0);
  	dout: OUT std_logic_VECTOR(31 downto 0);
  	nd: IN std_logic;
  	rfd: OUT std_logic;
  	rdy: OUT std_logic;
  	we: IN std_logic);
  	
	-- XST attributes
  attribute incremental_synthesis : string;
  attribute incremental_synthesis of main_mem : entity is "yes";
end entity;

architecture struct of main_mem is
  
begin
  blockRAM: micro6_ram port map (
    addr => addr,
  	clk => clk,
  	din => din,
  	dout => dout,
  	nd => nd,
  	rfd => rfd,
  	rdy => rdy,
  	we => we);  
end architecture;