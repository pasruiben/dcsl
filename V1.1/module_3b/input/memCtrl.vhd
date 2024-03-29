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
 -- File           : memCtrl.vhd
 -----------------------------------------------------------------------------
 -- Description    : Memory Controller
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


entity memCtrl is
  port (
    rst      : in std_logic;
    clk      : in std_logic;
    -- Data path
    rqDPT    : in std_logic;
    rdDPT    : in std_logic;
    wrDPT    : in std_logic;
    addrDPT  : in std_logic_vector;
    inDPT    : out std_logic_vector;
    outDPT   : in std_logic_vector;
    readyDPT : out std_logic;
    -- Fetch unit
    rqFch    : in std_logic;
    rdFch    : in std_logic; 
    addrFch  : in std_logic_vector;
    inFch    : out std_logic_vector;
    readyFch : out std_logic;
    -- I/O unit
    rqIO     : in std_logic;
    rdIO     : in std_logic;
    wrIO     : in std_logic;
    addrIO   : in std_logic_vector;
    inIO     : out std_logic_vector;
    outIO    : in std_logic_vector;
    readyIO  : out std_logic;
    -- control signals
    addr     : out std_logic_vector;
    dataIn   : out std_logic_vector;
    dataOut  : in std_logic_vector;
    memRd    : out std_logic;
    memWr    : out std_logic;
    memReady : in std_logic);
end entity;

architecture behavioral of memCtrl is
  type state is (serviceDPT, serviceFch, serviceIO);
  signal currentState : state;
  signal nextState    : state;
  
begin
  -- complete the sensitivity list of the state register process
  stateFF: process (clk,rst) -- LISTA SENSITIVA
  begin
    -- Synchronous reset
    -- reset state is serviceFch
		-- Register current state every clock cycle
	-- ADD CODE HERE
    if (clk = '1' and clk'event) then
			if (rst = '1') then
				currentState <= serviceFch;
			else
				currentState <= nextState;    
			end if;
		end if;    
  end process;
  --END ADD CODE
  
  -- complete the sensitivity list of the next state decoding logic
  nextState_dec: process (currentState, memReady, rqDPT, rqFch, rqIO)    -- LISTA SENSITIVA
  begin
  -- for each state (current state), define the next state according to the request ports (rqDPT, rqFch, rqIO)
  -- take priority of the units (data path, fetch unit, cpu) into account
  --ADD CODE
  if (memReady = '1') then
		if (rqFch = '1') then
			nextState <= serviceFch;
		elsif (rqDPT = '1') then
			nextState <= serviceDPT;
		elsif (rqIO = '1') then
			nextState <= serviceIO;
		else
			nextState <= serviceFch;
		end if;
	end if;
   -- END ADD CODE
  end process;
  
  -- Memory data-out bus is always connected to the data-in buses of all units  
  inDPT <= dataOut;
  inFch <= dataOut;
  inIO  <= dataOut;
  
  -- complete the sensitivity list of the multiplexer logic
  multiplexer: process (currentState, addrFch, rdFch, addrDPT, outDPT, rdDPT, wrDPT, addrIO, outIO, rdIO, wrIO, memReady)  -- LISTA SENSITIVA
  begin
    -- default values of the 'ready' signals
    readyDPT <= '0';
    readyFch <= '0';
    readyIO <= '0';
    
    -- for each state (current state), define the multiplexer outputs 
    -- The mux outputs in the serviceFch state are given as an example
--       addr     <= addrFch;
--       dataIn   <= outDPT; -- This assingment is arbitrary (to avoid a latch)
--       memRd    <= rdFch;
--       memWr    <= '0';
--       readyFch <= memReady;
	--ADD CODE	
		case currentState is
			
			when serviceFch =>
				addr <= addrFch;
				dataIn <= outDPT;
				memRd <= rdFch;
				memWr <= '0';
				readyFch <= memReady;    
	
			when serviceDPT =>
				addr <= addrDPT;
				dataIn <= outDPT;
				memRd <= rdDPT;
				memWr <= wrDPT;
				readyDPT <= memReady;

			when serviceIO =>
				addr <= addrIO;
				dataIn <= outIO;
				memRd <= rdIO;
				memWr <= wrIO;
				readyIO <= memReady;
  	
		end case;
	--END ADD CODE
  end process;
end architecture;
    
    
        
