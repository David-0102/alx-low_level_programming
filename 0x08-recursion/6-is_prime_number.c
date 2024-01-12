#include "main.h"
/**
 * prime2 - evaluates from 1 to n
 * @a: number n
 * @b: number that iterates from 0 to n
 *
 * Return: On success 1.
 * On error returns -1 and sets errno appropriately
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if number is a prime number
 * @n: number integer
 *
 * Return: On success 1.
 * On error, returns -1, sets errno appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
