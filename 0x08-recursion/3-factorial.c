#include "main.h"

/**
  * factorial - prints the factorial of a number
  * @n:integer whose factorial is to be printed
  * Return: factorial of the numbe
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
