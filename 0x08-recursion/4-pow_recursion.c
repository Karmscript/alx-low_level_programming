#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y
  * @x: value to be raised to the power of y
  * @y: power by which x must be raised
  * Return: returns the value of x raised to power y (-1, if y is negative)
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
