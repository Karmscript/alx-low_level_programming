#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string of unknown size
  * Return: Copy if successful or NULL if not
  */
char *_strdup(char *str)
{
	unsigned len;
	char *copy;
	unsigned int i;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	len++;
	copy = malloc(len * sizeof(char));

	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
