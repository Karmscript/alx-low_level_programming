#include <stdio.h>

/**
  * main - Entry point of function
  * return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;
	int j = 0;
	int k;

	while (i < 1024 && j < 1024)
	{
	i += 3;
	j += 5;
	k = i + j;
	printf("%d\n", k);
	}
	return (0);
}
