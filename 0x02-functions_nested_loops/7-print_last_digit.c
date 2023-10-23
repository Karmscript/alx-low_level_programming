#include "main.h"

/**
  * print_last_digit - prints the last digit of an input
  * @i: input whose last digit is to be printed
  * Return: the last digit
  */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
	i *= -1;
	}
	j = i % 10;
	_putchar('0' + j);

	return (j);
}
