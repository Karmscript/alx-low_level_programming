#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
	if ((i / 10) < (i % 10))
	{
	if (i != 89)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar(8 + '0');
	putchar(9 + '0');
	return (0);
}
