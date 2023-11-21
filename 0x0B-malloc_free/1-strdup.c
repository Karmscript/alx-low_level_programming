#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string of unknown size
  * Return: Copy if successful or NULL if not
  */
char *_strdup(char *str)
{
	size_t str_length = strlen(str);
	char *copy = (char *)malloc((str_length + 1) * sizeof(char));
	unsigned int i;

	if (!str)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= str_length; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
