#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned integer
  * Return: void pointer if successful, exit with a status value of 98 if not successful
  */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
