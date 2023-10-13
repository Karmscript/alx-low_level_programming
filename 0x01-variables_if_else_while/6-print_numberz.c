#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always Success (0)
  */
int main(void)
{
	int i;
	/* using putchar to print all single digit numbers */
	for (i = 0; i < 10; i++)
	{
	putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
