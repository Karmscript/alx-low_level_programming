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

	int lDigit = n % 10;

	/* your code goes there */
	/* last digit saga*/
	if (lDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	else if (lDigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (lDigit < 6 && lDigit != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	}

	return (0);
}
