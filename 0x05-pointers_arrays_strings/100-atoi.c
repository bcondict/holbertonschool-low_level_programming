#include "main.h"

/**
 * _strlen - return the number of a string
 * @s: string
 * Return: number of string (a)
 */
int _strlen(char *s)
{
	int a = 0, b = 1;
	char c = s[0];

	while (c != '\0')
	{
		a++;
		c = s[b++];
	}

	return (a);
}


/**
* _atoi - convert a string to an integer
* @s: string
*
* Return: 0 if there's no a number into string or number
*/

int _atoi(char *s)
{
	unsigned int i = 0, len = 0;
	int number = 0, sign = 0;

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			sign = sign + 1;
		else if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
		else if (number > 0)
			break;
	}
	if (sign % 2 != 0)
		number = number * (-1);	
	return (number);
}