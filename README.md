# mac-C-compiler-template
## Description  
An example template for compiling C++ code in VS code for Macs with ARM M1 Silicon chips  

## Prerequisites  

1. Install [gcc](https://formulae.brew.sh/formula/gcc) via Homebrew  
2. Add C++ extensions in VS code

## Structure of this framework

The main.cpp in the app folder is the runner (the access point for running your C++ program). The core folder is for adding dependencies like functions and classes; these are imported into app/main.cpp.
Place all .hpp files and their corresponding .cpp files into the core folder.

## Running the program
  
To run your code...  
- `cd Mac_C++_Compiler`  
- `bash compile.sh`  
  
This will run a script that links and compiles all the files in core with app and runs your program.  
