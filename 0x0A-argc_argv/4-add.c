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
            char *current_arg = argv[a];
            while (*current_arg)
            {
                if (!isdigit(*current_arg))
                {
                    printf("Error\n");
                    return 1;
                }
                current_arg++;
            }

            b = atoi(argv[a]);
            i += b;
        }
        printf("%d\n", i);
    }

    return 0;
}
