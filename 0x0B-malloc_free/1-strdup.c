#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string of unknown size
  * Return: Copy if successful or NULL if not
  */
char *_strdup(char *str)
{
	size_t str_length;
	char *copy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	str_length = strlen(str);
	copy = malloc((str_length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= str_length; i++)
		copy[i] = str[i];

	return (copy);
}
