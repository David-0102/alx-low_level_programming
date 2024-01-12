#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: Integer
 *
 * Return: On success 1.
 * On error, return -1 and set errno appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factroial(n - 1));
}
