#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* your code goes there */
    if ( n < 0) {                  /* If the n number is less than 0 */
        printf ("is negative\n" ); 
    }
    else if ( n == 0 ) {            /* If the n number is exactly 0 */ 
        printf( "is zero\n" );       
    }
    else if ( n > 1 ) {             /* If the n number is greater 0 */ 
        printf( "is positive\n" );       
    }
	return (0);
}