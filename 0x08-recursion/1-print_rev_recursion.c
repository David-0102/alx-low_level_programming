#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to print
 *
 * Return: On success 1.
 * On error, return -1, set errno appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
