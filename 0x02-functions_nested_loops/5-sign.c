#include "main.h"

/**
  * print_sign - prints the sign an input carries
  * @n: variable whose sign is to be checked and printed
  * Return: either 0, 1 0r -1
  */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('+');
	return (1);
	}
}
