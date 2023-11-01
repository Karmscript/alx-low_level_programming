#include "main.h"

/**
  * _strlen_recursion - returns the lenght of the string
  * @s: string whose length is to be returned
  * Return: displays the return value of the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

