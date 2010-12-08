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
 -- File           : alu_tb.vhd
 -----------------------------------------------------------------------------
 -- Description    : Testbench for ALU
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
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

use WORK.micro_pk.all;
use WORK.micro_comp_pk.all;

use STD.textio.all;
use IEEE.std_logic_textio.all;

entity alu_tb is
end entity;

architecture test of alu_tb is
    
  -- declare signals to connect the ALU
  -- you may use the same names as the ALU formal ports
  -- ADD CODE
  component alu
	port(
		a : in std_logic_vector(DATA_WIDTH - 1 downto 0);
		b : in std_logic_vector(DATA_WIDTH - 1 downto 0);
      shiftCntSrc : in std_logic;
	 shiftCnt : in std_logic_vector(4 downto 0);
	      sel : in alu_op;	
	      neg : out std_logic;
	      ovf : out std_logic;
	      zro : out std_logic;
	   result : out std_logic_vector(DATA_WIDTH - 1 downto 0)
	);
  end component;

  signal a_v : std_logic_vector (DATA_WIDTH - 1 downto 0); 
  signal b_v : std_logic_vector (DATA_WIDTH - 1 downto 0);
  signal shiftCnt_v : std_logic_vector (4 downto 0); -- shift count
  signal shiftCntSrc_v : std_logic;
  signal sel_v : alu_op;
  signal neg_v : std_logic; 
  signal ovf_v : std_logic; 
  signal zro_v : std_logic;
  signal result_v : std_logic_vector (DATA_WIDTH - 1 downto 0);
 
  signal EndOfSim : boolean:=false;
  -- END ADD CODE

  -- computation (propagation) delay time
  constant delay_time : time := 20 ns;
  -- time elapsed before applying the next test vector
  constant time_offset : time := 80 ns;
  
  -- Use this function to convert from STD_LOGIC_VECTOR to alu_op
  function slv_to_alu_op (arg : std_logic_vector (4 downto 0)) return alu_op is
  begin
    case arg is
    when "00000" => return ADD_op;
    when "00001" => return SUB_OP;
    when "00010" => return MULT_OP;
    when "00011" => return DIV_OP;
    when "00100" => return REM_OP;
    when "00101" => return AND_OP;
    when "00110" => return OR_OP;
    when "00111" => return XOR_OP;
    when "01000" => return INV_OP;
    when "01001" => return INC_OP;
    when "01010" => return DEC_OP;
    when "01011" => return ZRO_OP;
    when "01100" => return PASS_A;
    when "01101" => return PASS_B;
    when "01110" => return SHR_ARTH;
    when "01111" => return SHR_LGC;
    when "10000" => return SHL_ARTH;
    when "10001" => return SHL_LGC;
    when "10010" => return ROTR;
    when "10011" => return ROTL;
    when others => return PASS_A;
    end case;
  end function;
    
begin
    -- instantiate the ALU here
    -- ADD CODE
  IALU : alu
  port map(
     	a 		=> a_v ,
     	b 		=> b_v,
	shiftCnt	=> shiftCnt_v,
	shiftCntSrc 	=> shiftCntSrc_v,
	sel 		=> sel_v,	
	neg         	=> neg_v,
	ovf         	=> ovf_v,
	zro		=> zro_v,
	result      	=> result_v
  ); 
 
        
    testbench_proc: process
    -- declare a pointer to the test vectors file
    -- add code here
    file vectors_file : text is "alu_testvectors.txt";    
  
    -- declare a line buffer
    -- add code here
    variable line_buffer : line;    

    -- declare variables for the stimuli and expected values that you plan
    -- to read from the text file
    -- add code here       
    variable num_vector : integer; --indice de vector
    variable a_e : integer;
    variable b_e : integer;
    variable shiftCntSrc_e : std_logic;
    variable shiftCnt_e : std_logic_vector(4 downto 0);
    variable sel_e : std_logic_vector(4 downto 0);
    variable c_e : std_logic;  --¿y esto? <-----------------------------
    variable neg_e : std_logic;
    variable ovf_e : std_logic;
    variable zro_e : std_logic;
    variable result_e : integer;
            
    begin
    -- keep reading (loop) until you reach the end of the file
    -- the loop starts here
    --ADD CODE
    while (not endfile(vectors_file)) loop
      
        -- read a line into the line buffer
        -- ADD CODE
        readline(vectors_file,line_buffer);  
        -- read test vector entries one by one from the line buffer
        -- ADD CODE  
        read(line_buffer,num_vector);
	read(line_buffer,a_e);
	read(line_buffer,b_e);
	read(line_buffer,sel_e);
	read(line_buffer,shiftCnt_e);
	read(line_buffer,shiftCntSrc_e);    
	read(line_buffer,result_e);
	read(line_buffer,c_e);
	read(line_buffer,neg_e);
	read(line_buffer,ovf_e);
	read(line_buffer,zro_e);
	-- applying stimuli
        -- ADD CODE
        a_v <= (std_logic_vector(to_signed(a_e,DATA_WIDTH)));
	b_v <= (std_logic_vector(to_signed(b_e,DATA_WIDTH)));
	shiftCnt_v <= (std_logic_vector(unsigned(shiftCnt_e)));
	shiftCntSrc_v <= shiftCntSrc_e; 
	sel_v <= slv_to_alu_op(sel_e);
                    
        wait for delay_time;
            
        -- Comparing outputs against expected values
        -- ADD CODE
	
    	assert (std_logic(neg_e) = neg_v )
	 report "Neg"& std_logic'image(neg_e) & "no coinciden con el valor esperado en el vector"&integer'image(num_vector)
	 severity ERROR;

	assert (std_logic(ovf_e) = ovf_v )
	 report "Ovf"& std_logic'image(ovf_e) & "no coinciden con el valor esperado en el vector"&integer'image(num_vector)
	 severity ERROR;

	assert (std_logic(zro_e) = zro_v )
	 report "Zro"& std_logic'image(zro_e) & "no coinciden con el valor esperado en el vector"&integer'image(num_vector)
	 severity ERROR;

	if(c_e = '1') then
	assert (std_logic_vector(to_signed(result_e,DATA_WIDTH)) = result_v)
 	 report "Resultado"&integer'image(result_e) & "no coinciden con el valor esperado en el vector"&integer'image(num_vector)
 	 severity ERROR;        
        
	end if;  
  
        wait for time_offset;
            
    -- the loop ends here
    end loop;
    wait; -- wait forever after consuming all the test vectors
    end process;
    
end architecture;
            
    
