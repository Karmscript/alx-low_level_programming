#include <stdio.h>

/**
  * main - Entry point of function
  * return: no return value
  */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 1024 && j < 1024)
	{
	i += 3;
	j += 5;
	int k = i + j;
	printf("%d\n", k);
	}
}
