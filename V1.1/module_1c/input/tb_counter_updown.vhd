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
 -- File           : tb_counter_updown.vhd
 -----------------------------------------------------------------------------
 -- Description    : 
 -- --------------------------------------------------------------------------
 -- Author         : Geert Vanwijnsberghe
 -- Date           : 4/12/2006
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

entity tb_counter_updown is
end entity;

architecture test of tb_counter_updown is

  type vector_out_type  is array(0 to 16) of std_logic_vector(8 downto 0);
  constant vec_out : vector_out_type := (
   "UUUUUUUUU",
   "UUUUUUUUU",
   "000000000",
   "000000000",
   "000000000",
   "000101101",
   "000101101",
   "000101110",
   "000101111",
   "000101111",
   "000101110",
   "000101101",
   "000101101",
   "011010001",
   "011010001",
   "011010010",
   "011010010"
   );

  -- add the signal declarations
  -- ADD CODE

   signal  rst : std_logic;         
   signal  clk : std_logic;         
   signal  d   : std_logic_vector(8 downto 0);  
   signal  ld  : std_logic;         
   signal  inc : std_logic; 
   signal  dec : std_logic;       
   signal  q   : std_logic_vector(8 downto 0);
   signal EndOfSim : boolean:=false;

  -- add component description of the counter_updown
  -- ADD CODE
  
  component counter_updown
    port (
      rst : in std_logic;
      clk : in std_logic;
      d   : in std_logic_vector;
      ld  : in std_logic;
      inc : in std_logic;
      dec : in std_logic;
      q   : out std_logic_vector
     );
  end component;
  
  --END ADD CODE
  
  procedure GenClock (signal   clk       : out std_logic;
                      constant startlevel: in std_logic; -- '0' | '1'
                      constant CLKPeriod : in time;
                      signal   EndOfSim  : in boolean
                      ) is
  begin
      loop
        exit when EndOfSim;
        clk <= startlevel;
        wait for CLKPeriod / 2;
        exit when EndOfSim;
        clk <= not startlevel;
        wait for CLKPeriod - (CLKPeriod / 2); 
      end loop;
      wait; 
  end procedure GenClock;
  
begin

-- instantiate a 9 bit counter_updown.
-- ADD CODE

U1 : counter_updown
  port map(
    rst =>rst ,
    clk =>clk ,
    d   =>d   ,
    ld  =>ld  ,
    inc =>inc ,
    dec =>dec ,
    q   =>q  
  );

-- apply a clock clk with a period of 10 ns starting at high level
-- ADD CODE

GenClock(clk,'1',10 ns,EndOfSim);

-- END ADD CODE

main: process
begin
  d <= std_logic_vector(to_unsigned(45,9));
  rst <= '0';
  ld <= '0';
  inc <= '0';
  dec <= '0';
  wait for 25 ns;
  rst <='1';
  wait for 10 ns;
  rst <= '0';
  wait for 10 ns;
  ld <='1';
  wait for 10 ns;
  ld <='0';
  wait for 10 ns;
  inc <='1';
  wait for 20 ns;
  inc <='0';
  wait for 10 ns;
  dec <='1';
  wait for 20 ns;
  dec <='0';
  d <= std_logic_vector(to_unsigned(209,9));
  wait for 10 ns;
  inc <= '1';
  ld <= '1';
  dec <= '1';
  wait for 10 ns;
  inc <= '0';
  ld <= '0'; 
  dec <= '0';
  wait for 10 ns; 
  inc <= '1';
  dec <= '1'; 
  wait for 10 ns;
  inc <= '0';
  dec <= '0';  
  wait for 10 ns;
 
  EndOfSim <= true;
  wait;
end process main;

verify: process
begin
  for i in 0 to 16 loop
    wait until falling_edge(clk);
    wait for 1 ns;
    assert q = vec_out(i)
      report "Wrong q"
      severity error;
  end loop; 
  wait;
end process verify;


end architecture;
