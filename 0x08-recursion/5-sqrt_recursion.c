#include "main.h"

/**
 * sqrt2 - evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1
 */
int sqrt_(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else		
		return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}
