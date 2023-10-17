#include <stdio.h>
/**
  * main - printing the size, in bytes, of a pointer
  *
  * Return: always 0
  */
int main(void)
{
	int *p;

	printf("size of a pointer: %lu\n", sizeof(p));
	return (0);
}
