#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point of function that multiplies two numbers
  * @argc: number of arguments
  * @argv: the arguments
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int a, b, i;

	if (argc >= 3)
	{
		a = atoi(argv[1]);

		b = atoi(argv[2]);

		i = a * b;

		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
