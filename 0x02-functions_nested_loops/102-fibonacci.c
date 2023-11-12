#include <stdio.h>

/**
  * main - Entry point of function, prints
  * the n terms of a fibonacci sequence
  * Return:Always zero (Success)
  */
int main(void)
{
	long long int first_term = 1;
	long long int second_term = 2;
	int i;
	long long int next_term;

	for (i = 0; i <= 50; i++)
	{
		printf("%lld, ", first_term);
		next_term = first_term + second_term;

		first_term = second_term;

		second_term = next_term;
	}
	printf("\n");
	return (0);
}
