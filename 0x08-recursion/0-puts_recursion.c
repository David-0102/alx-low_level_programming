/*
 * recursion program that prints a string followed by a new line
 *@s: printed string
 * Author: Mumo Ndunda
 */

/*
 * main - entry point for the program
 *
 * return: 0
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
