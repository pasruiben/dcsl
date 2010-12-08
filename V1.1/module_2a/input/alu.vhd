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
-- File        : alu.vhd
-- Design      : ALU
-- -----------------------------------------------------------------------------
-- Description : Arithmetic and logic unit
-- The ALU performs arithmetic and logic operations on two operands A and B. the
-- required operations is specified by the input port "sel". The output shows on 
-- the output port "result". The ALU updates the condition flags (neg, ovf, zro)
-- as a result of the computation.
-- -----------------------------------------------------------------------------
-- History :
--  1/12/06 : vwb : use functions +,- .... from numeric_std instead of micro_pk
--
--------------------------------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

use WORK.micro_pk.all;

entity alu is
port (
  a           : in std_logic_vector (DATA_WIDTH - 1 downto 0); 
  b           : in std_logic_vector (DATA_WIDTH - 1 downto 0);
  sel         : in alu_op;
  shiftCnt    : in std_logic_vector (4 downto 0); -- shift count
  shiftCntSrc : in std_logic; -- shift count source (*)
  result      : out std_logic_vector (DATA_WIDTH - 1 downto 0);
  neg         : out std_logic; -- negative
  ovf         : out std_logic; -- overflow
  zro         : out std_logic  -- zero
);
  -- (*) shiftCntSrc:
  -- when 0, the shift count is the input shiftCnt, otherwise, it is the least 
  -- significant slice of the input b.
end entity;

architecture behavioral of alu is

  signal cnt_i    : integer range 0 to 31;          -- actual shift count
  signal result_i : std_logic_vector(result'range); -- internal value of result
                                                    -- needed because port out cannot be read
  --ADD CODE
  signal signed_a : signed (DATA_WIDTH -1 downto 0);
  -- END ADD CODE
 -- signal signed_b : signed (DATA_WIDTH -1 downto 0);

  function is_neg (arg: signed) return boolean is   -- this function could also be put in the
  begin                                             -- micro_pk.vhd file
    return ( not is_pos(arg)); 
  end function;  

  --ADD CODE
  function is_zero (arg:std_logic_vector) return boolean is  
    variable val : boolean := TRUE;
    variable tmp : std_logic_vector(arg'range) := arg;
  begin
    for n in arg'length-1 downto 0 loop
      val := val and (tmp(n)='0');
    end loop;
    return val;
  end function;
  -- END ADD CODE
	 
begin

  -- calculation of the actual shift value depends on  shiftCntSrc
  cnt_i <= to_integer(unsigned(b (4 downto 0)))  when (shiftCntSrc = '1')   else
           to_integer(unsigned(shiftCnt));
    
  -- Perform the actual computations for ovf and result_i depending on the value of sel, a,b and cnt_i
  -- add the sensitivity list    
  computation: process (a,b,sel,shiftCnt,shiftCntSrc,cnt_i)  -- LISTA SENSITIVA
    variable result_v : std_logic_vector(result'range);  -- assign the result first to a variable (= immediate assignment)
                                                         -- because the result will also be needed to calculate
                                                         -- the overflow flag.
	--AADD CODE
    variable signo : std_logic;
	--END ADD CODE
	
  begin
    -- add default values for result_i and ovf
    -- ADD CODE
    result_i <= (others => '0');
    ovf <= '0';
    signed_a <= signed(a);
    
    case sel is
      when ADD_OP =>
        -- calculate result_v
        -- ADD CODE
        result_v := std_logic_vector(signed(a) + signed(b)); 
        
        -- calculate ovf
        --ADD CODE
        if((is_neg(signed(a)) and is_neg(signed(b)) and is_pos(signed(result_v))) or 
	   (is_pos(signed(a)) and is_pos(signed(b)) and is_neg(signed(result_v)))) then
		ovf <= '1';
	end if;
        
      when SUB_OP => 
        -- ADD CODE
	result_v := std_logic_vector(signed(a) - signed(b));
	
	if((is_pos(signed(a)) and is_neg(signed(b)) and is_neg(signed(result_v))) or
	   (is_neg(signed(a)) and is_pos(signed(b)) and is_pos(signed(result_v)))) then
		ovf <= '1';
	end if;

      when MULT_OP =>
        -- ADD CODE
	result_v := std_logic_vector(MultL(signed(a),signed(b)));        

	for n in DATA_WIDTH-1 downto DATA_WIDTH/2-1 loop
	
		if ((a(n) /= a(DATA_WIDTH/2)) or (b(n) /= b(DATA_WIDTH/2))) then
			ovf <='1';
		end if;
	end loop;	

--       when DIV_OP => -- do not implement
--       when REM_OP => -- do not implement
      when INC_OP => 
        -- add code here
	result_v := std_logic_vector(signed(a) + 1);

	if (is_pos(signed(a)) and is_neg(signed(result_v))) then
		ovf <= '1';
	end if;      

      -- add also code for the rest of the operations : DEC_OP,ZRO_OP,AND_OP,OR_OP,XOR_OP,
      --  INV_OP,PASS_A,PASS_B,SHR_ARTH,SHR_LGC,SHL_ARTH,SHL_LGC,ROTR,ROTL
      
      when DEC_OP => 
        -- add code here
	result_v := std_logic_vector(signed(a) - 1);

	if (is_neg(signed(a)) and is_pos(signed(result_v))) then
		ovf <= '1';
	end if;    
      
      when ZRO_OP =>
	result_v := (others => '0');

      when AND_OP =>
	result_v := (a and b);	

      when OR_OP =>
	result_v := (a or b);

      when XOR_OP =>
	result_v := (a xor b);

      when INV_OP =>
	result_v := (not a);

      when PASS_A =>
	result_v := a;

      when PASS_B =>
	result_v := b;

      when SHR_ARTH =>
	result_v := std_logic_vector(shift_right(signed(a),cnt_i));

      when SHR_LGC =>
	result_v := std_logic_vector(shift_right(unsigned(a),cnt_i));

      when SHL_ARTH =>
	signo := signed_a(DATA_WIDTH-1);
	result_v := std_logic_vector(shift_left(signed(a),cnt_i));
	result_v(DATA_WIDTH-1) := signo;

      when SHL_LGC =>
	result_v := std_logic_vector(shift_left(unsigned(a),cnt_i));

      when ROTR =>
	result_v := std_logic_vector(rotate_right(signed(a),cnt_i));

      when ROTL =>
	result_v := std_logic_vector(rotate_left(signed(a),cnt_i));

      when others => 
        result_v := a;
    end case;
    result_i <= result_v;
  end process computation;
  
  -- Calculate zro and neg
  -- add code here
  zro <= '1' when (is_zero(result_i)) else '0';
  neg <= '1' when (is_neg(signed(result_i))) else '0';
  
  
  
  result <= result_i;

end architecture;
 
