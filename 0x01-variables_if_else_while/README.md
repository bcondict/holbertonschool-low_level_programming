# 0x01-variable_if_else_while 
### What are the arithmetic operators and how to use them
therea re mathematical function that takes two operands and performs a calculation on then. how to use them:
```c
#include <stdio.h>

main()
{
   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );	
   c = a--; 
   printf("Line 7 - Value of c is %d\n", c );
}
```
### What are the logical operators (sometimes called boolean operators) and how to use them
Bolean Operators are words that connect search terms to create logical phrases, there are:
- **and**= find items that use *both* keywords
- **or**= find items that use either of the keywords 
- **not**= Excludes articles that use the keyword 

### What the the relational operators and how to use them
- ">" means greater than 
- "<" means less than
- ">=" means greater than or equal to
- "<=" means less than or equal to
- "==" means equal to
- "!=" means not equal to

### What values are considered TRUE and FALSE in C
**false** is represented with 0 and **true** is represented with 1, also whatever other number can be represented as true.

### How to use the if, if ... else statements
```c
#include <stdio.h>    
 
int main()                            
{
    int number;                         
   
    printf( "Please enter number between 1 to 10: " );  /* ask for a number  */
    scanf( "%d", &number );                 /* The input is put in the variable (number) */
    if ( number < 5 ) {                  
        printf ("woow \n" ); /* Just to show a text */
    }
    else if ( number > 5 ) {            
        printf( "hmmm\n" )
    else if ( number == 0 ) {            
        printf( "you are bored\n" );       
    }
    else {                                  /*
        printf( "you are worse that bored\n" );     /* Executed if no other statement is */
    }
  return 0;
 
}
```

### How to use comments
for make comment in c there are different ways to like 
" /* the comment */ "
"/** 
* other way to comment
*
*/" 

### how to declare variables of *types char, int, unsigned int*
after open your "int main ()" you put the variable that you want to open, a variable is like a box and the kind of variable the size of that box.

### how to assign variables of types *char, int, unsigned int*
```
#include <stdio.h>    
 
int main()                            
{
    char a; /* to declare a char */
    int b; /* to delcare a int */ 
    unsigned int c; /* to declare an unsigned int */
}
``` 




bibliography

https://academicanswers.waldenu.edu/faq/72773
https://www.cprogramming.com/tutorial/c/lesson2.html