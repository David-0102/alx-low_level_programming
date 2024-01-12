#include "main.h"
/**
 * sqrt2 - runs evaluation of square root from 1 to n
 * @a: number n
 * @b: iteration number from 1 to n
 *
 * Return: On succes 1.
 * On error return -1, and set errno appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Integer
 *
 * Return: On success 1.
 * On error, return -1, set errno appropriately.
 */
int _sqrt_recursion(int n)
{
	return(sqrt2(n, 1));
}
