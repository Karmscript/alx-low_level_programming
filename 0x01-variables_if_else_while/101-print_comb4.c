#include <stdio.h>

/**
* main - function prints some three digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 999; i++)
	{
	if (((i / 100) < ((i / 10) % 10)) && (((i / 10) % 10) < (i % 10)))
	{
	putchar((i / 100) + '0');
	putchar(((i / 10) % 10) + '0');
	putchar((i % 10) + '0');
	if (i != 789)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
