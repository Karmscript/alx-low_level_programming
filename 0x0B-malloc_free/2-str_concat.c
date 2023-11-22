#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenates two strings and allocates memory required
  * @s1: first string
  * @s2: second string
  * Return: concatenated string, else NULL
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *new_str;
	size_t len1, len2, len;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	new_str = malloc(len * sizeof(char));

	if (!new_str)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		new_str[len1 + j] = s2[j];
	}
	new_str[len - 1] = '\0';

	return (new_str);
}
