#include "main.h"
/**
 * is_prime_number - prove is a number is prime
 * @n: number to be prove
 * Return: the first condition and n number
 */
int is_prime_number(int n)
{
	return (prove_of_prim(2, n));
}

/**
 * prove_of_prim - see if a number is or not prime
 * @a: count to n
 * @n: prime number?
 * Return: 0 if n is false and 1 if is false
 */
int prove_of_prim((int a, int n))
{
	if (n <= 1 || (n != a && n % a == 0))
		return (0);
	if (n == a)
		return (1);

	return (prove_of_prim(a + 1, n));
}
