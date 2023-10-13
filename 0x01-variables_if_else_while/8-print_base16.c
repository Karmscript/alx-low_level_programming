#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	char alphaPart = 'a';
	/* printing all the numbers of base 16 */
	for (i = 0; i <= 9; i++)
	{
	putchar('0' + i);
	}
	for (alphaPart = 'a'; alphaPart < 'g'; alphaPart++)
	{
	putchar(alphaPart);
	}
	putchar('\n');
	return (0);
}
