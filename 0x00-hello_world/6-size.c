/*
 * C program that prints sizes of data types
 *
 * Author: Mumo Ndunda
 */

/*
 * main - entry point of the program
 *
 * Return: 0 success
 */

#include <stdio.h>

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

