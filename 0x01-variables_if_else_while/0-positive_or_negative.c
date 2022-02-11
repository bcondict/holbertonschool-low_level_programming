#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - evatuates random number
*
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if ( n < 0)
    {                  /* If the n number is less than 0 */
        printf ( n ,"is negative\n" ); 
    }
    else if ( n == 0 ) 
    {            /* If the n number is exactly 0 */ 
        printf( n , "is zero\n" );       
    }
    else if ( n > 1 ) 
    {             /* If the n number is greater 0 */ 
        printf( n ,"is positive\n" );       
    }
	return (0);
}