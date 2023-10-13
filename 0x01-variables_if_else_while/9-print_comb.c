#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	/* printing all single digits separated by a comma */
	for (i = 0; i < 9; i++)
	{
	putchar('0' + i);
	putchar(',');
	putchar(' ');
	}
	putchar('0' + 9);
	return (0);
}
