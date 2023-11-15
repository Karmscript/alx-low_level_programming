#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse
  * @s:m string whose reverse is to be printed
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
