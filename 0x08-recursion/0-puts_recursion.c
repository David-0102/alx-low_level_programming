#include "main.h"
/*
 * recursion program that prints a string followed by a new line
 * Author: Mumo Ndunda
 */

/**
 * _puts_recursion - Prints a string followed by a newline using recursive algo
 * @s: input string
 * return: 1 On success
 * On error, return -1 and set errno appropriately
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
