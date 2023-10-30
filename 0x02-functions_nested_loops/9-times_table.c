#include "main.h"

/**
  * times_table - prints out the 9 times table' starting with zero
  */
void times_table(void)
{
	int i, j, k, x, y;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	x = i * j;
	if (i == 0 && j == 0)
	{
	_putchar(x + '0');
	}
	else if (x > 9)
	{
	k = x / 10;
	y = x % 10;
	_putchar(',');
	_putchar(' ');
	_putchar(k + '0');
	_putchar(y + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(x + '0');
	}
	}
	_putchar('\n');
	}
}
