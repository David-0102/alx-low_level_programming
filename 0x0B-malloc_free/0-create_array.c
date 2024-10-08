#include <stdlib.h>

/**
 * create_array - Create array of chars and initialize with specific char.
 * @size: The size of the array to be created.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}

