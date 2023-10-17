#include "main.h"
#include <stdio.h>

/**
  * swap_int - swap the values of two integers
  * @a: pointer to the first value
  *@b: pointer to the second value
  */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
