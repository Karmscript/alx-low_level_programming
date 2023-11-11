#include "main.h"

/**
  * print_times_table - function prints the n times table, starting with zero
  * @n: depicts the number of rows and columns in the times table
  */
void print_times_table(int n)
{
	int i, j;

	if ((n >= 0) && (n <= 15))
	{
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	int table_num = i * j;

	if (table_num == 0 && j == 0)
	_putchar(table_num + '0');
	else if (j != 0)
	{
	_putchar(',');
	_putchar(' ');
	if (table_num > 99)
	{
	_putchar((table_num / 100) + '0');
	_putchar(((table_num / 10) % 10) + '0');
	}
	else if (table_num <= 99 && table_num > 9)
	{
	_putchar(' ');
	_putchar((table_num / 10) + '0');
	}
	else
	{
	_putchar(' ');
	_putchar(' ');
	}
	_putchar((table_num % 10) + '0');
	}
	}
	_putchar('\n');
	}
	}
}
