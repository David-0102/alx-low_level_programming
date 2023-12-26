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
	printf("size of char : %zu bytes\n", sizeof(char));
	printf("size of int : %zu bytes\n", sizeof(int));
	printf("size of a long int : %zu bytes\n", sizeof(long int));
	printf("size of a long long int : %zu bytes\n", sizeof(long long int));
	printf("size of a float : %zu bytes\n", sizeof(float));

	return (0);
}
