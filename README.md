# Collatz-Conjecture
Enter a number to see the steps it takes to reach 1! The number will go through a process where it is divided by 2 if it is even, and multiplied by 3 plus 1 if it is odd.

## Prerequisites
1. Get g++ compiler for C++.

## Installation
1. Install g++ compiler: `sudo apt install g++`
2. Download this repository in the terminal: `git clone https://github.com/StefiBad/Collatz-Conjecture`
3. Enter inside the directory: `cd Collatz-Conjecture`
4. Compile all the programs:
   - Main ---> `g++ run.cpp -o run`
   - Second ---> `g++ priorToPowerOfTwo.cpp -o priorToPowerOfTwo`
   - Third ---> `g++ reverse.cpp -o reverse`
   - Fourth ---> `g++ firstPower.cpp -o firstPower`
5. Run any program:
   - Main ---> `./run`
   - Second ---> `./priorToPowerOfTwo`
   - Third ---> `./reverse`
   - Fourth ---> `./firstPower`

## Features
1. Show the proccess of the number selected until it reaches 1 by the 3x+1 algorithm.
2. In addition, you can discover how this algorithm works specifically in priors to the powers of two (2^k-1).
3. Count the total amount of steps during the proccess!
4. Furthermore, you can observe this process in reverse order.
5. Find out which power of two appears first in each sequence.
