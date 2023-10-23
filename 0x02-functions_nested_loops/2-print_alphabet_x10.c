#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabets in lower case
  * main - uses built in function
  * Return: No return value
  */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	/* while loops that prints alphabets */
	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
