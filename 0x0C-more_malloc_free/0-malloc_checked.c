#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned integer
  * Return: void pointer if successful, else exit with 98
  */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
