#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars and initializes with a char
  * @size: size of the array
  * @c: specific char which the arry is to be initialized by
  * Return: NULL if the size = 0 and if it fails. return pointer
  */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
