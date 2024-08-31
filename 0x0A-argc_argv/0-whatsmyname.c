#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

