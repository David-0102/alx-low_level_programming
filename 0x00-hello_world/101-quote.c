/*
 * C program that prints text on console without printf function
 *
 * Author: Mumo Ndunda
 */

/*
 * main - entry point function for program
 *
 * Return: 1
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
