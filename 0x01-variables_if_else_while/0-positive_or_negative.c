#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* check if number is positive, negative or zero */
	if (n > 0)
	{
		puts("n is positive");
	}
	else if (n < 0)
	{
		puts("n is negative");
	}
	else
	{
		puts("n is zero");
	}

		return (0);
}
