#include "main.h"

/**
  * _isalpha - checks if input is an alphabet
  * @c: variable to be checked
  * Return: 1 if successful and 0 if unsuccessful
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
