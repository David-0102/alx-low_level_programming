#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
static int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
	if (*str == ' ')
	{
		in_word = 0;
	}
	else if (!in_word)
	{
		in_word = 1;
		count++;
	}
	str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str)
	{

	while (*str == ' ')
		str++;

	if (*str == '\0')
		break;

	word_len = 0;
	while (str[word_len] != ' ' && str[word_len] != '\0')
		word_len++;

	words[i] = malloc((word_len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (j = 0; j < i; j++)
	free(words[j]);
		free(words);
		return (NULL);
	}
	for (k = 0; k < word_len; k++)
		words[i][k] = str[k];
	words[i][k] = '\0';

	i++;
	str += word_len;
	}
	words[i] = NULL;

	return (words);
}

