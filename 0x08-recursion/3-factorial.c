#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
