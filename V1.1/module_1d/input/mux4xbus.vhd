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
 -- File           : mux4xbus.vhd
 -----------------------------------------------------------------------------
 -- Description    : multiplexer
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

entity mux4xbus is
  port (
    inport0 : in std_logic_vector (3 downto 0);  -- HE PUESTO 3 DOWNTO 0 EN TODOS
    inport1 : in std_logic_vector (3 downto 0);
    inport2 : in std_logic_vector (3 downto 0);
    inport3 : in std_logic_vector (3 downto 0);
    sel : in std_logic_vector (1 downto 0);
    outport : out std_logic_vector (3 downto 0));
end entity;

architecture behavioral of mux4xbus is
begin
  process (inport0, inport1, inport2, inport3, sel)   -- LISTA SENSITIVA
  begin
    -- case statement. 
    -- make sure you cover all cases.
	-- ADD CODE
	
	if (sel = "00") then
		outport <= inport0;
	elsif (sel = "01") then
		outport <= inport1;
	elsif (sel = "10") then
		outport <= inport2;
	else
		outport <= inport3;
	end if;
	
	-- END ADD CODE
  end process;
end architecture;	
