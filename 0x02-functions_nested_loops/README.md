# 0x02. C - Functions, nested loops
### What are nested loops and how to use them
nesting loops is the feature in C that allows the loopong of statements inside other loop. Any number of loops can be defined inside other loop/
### What is a function and how do you use functions
A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.
### What is the difference between a declaration and a definition of a function
- **declaration**= Declaration of a variable is for informing to the compiler the following information: name of the variable, type of value it holds and the initial value if any it takes. 
- **definition**= Definition of a variable says where the variable gets stored
### What is a prototype
the function prototype specifies the input/output interlace to the function i.e. what to give to the function and what to expect from the function.
### Scope of variables
In simple terms, scope of a variable is its lifetime in the program. This means that the scope of a variable is the block of code in the entire program where the variable is declared, used, and can be modified.
### What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- '-Wall'=  Recommended compiler warnings
- '-Werror'= Make all warnings into errors.
- '-pedantic'= Issue all the mandatory diagnostics listed in the C standard.
- '-Wextra'= This enables some extra warning flags that are not enabled by -Wall.
- 'std=gnu89'= Determine the language standard with dialect gnu89
### What are header files and how to to use them with #include
A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files. There are two types of header files: the files that the programmer writes and the files that comes with your compiler.
The way to use it goes like this:
```
#include <file>
``` 
example
```
#include <stdio.h>
```

bibliography

https://www.javatpoint.com/nested-loops-in-c
https://www.tutorialspoint.com/cprogramming/c_functions.htm#:~:text=A%20function%20is%20a%20group,your%20code%20into%20separate%20functions.
https://www.geeksforgeeks.org/difference-between-definition-and-declaration/
https://www.tutorialspoint.com/cprogramming/c_header_files.htm 