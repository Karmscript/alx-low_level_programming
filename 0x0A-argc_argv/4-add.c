#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - Entry point of function
  * @argc: argument counter
  * @argv: the arguments themselves
  * Return: 0 indicates success and 1 indicates error
  */
int main(int argc, char *argv[])
{
	int i = 0;

	int a, b;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (*argv[a] >= '0' && *argv[a] <= '9')
			{
				b = atoi(argv[a]);
				i += b;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", i);
	}
	return (0);
}
