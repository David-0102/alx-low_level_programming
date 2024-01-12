#include "main.h"
/**
 * palind2 - gets lengths of string
 * @a: string output
 * @l: integer to count length of string
 *
 * Return: On success 1.
 * On error return -1, and set errno appropriately
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares string v string in reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1/
 * On error, return -1
 */

int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: String being checked
 *
 * Return: On success 1.
 * On error, return -1, set errno appropriately
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
