# Collatz-Conjecture
Enter a number to see the steps it takes to reach 1! The number will go through a process where it is divided by 2 if it is even, and multiplied by 3 plus 1 if it is odd.

## Prerequisites
1. Get g++ compiler for C++.

## Installation
1. Install g++ compiler: `sudo apt install g++`
2. Download this repository in the terminal: `git clone https://github.com/StefiBad/Collatz-Conjecture`
3. Enter inside the directory: `cd Collatz-Conjecture`
4. Compile the main program: `g++ run.cpp -o run`
5. Compile the second program: `g++ priorToPowerOfTwo.cpp -o priorToPowerOfTwo`
6. Run any program:
   - Main ---> `./run`
   - Second ---> `./priorToPowerOfTwo`

## Features
1. Show the proccess of the number selected until it reaches 1 by the 3x+1 algorithm.
2. In addition, you can discover how this algorithm works specifically in priors to the powers of two (2^k-1).
3. Count the total amount of steps during the proccess!
