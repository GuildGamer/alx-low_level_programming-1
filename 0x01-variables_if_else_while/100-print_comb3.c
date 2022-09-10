#include <stdio.h>

/**
 *main - prints alphabet
 *Description: Using the main function
 *This program prints to stderr
 *Return: 0
 */
int main(void)
{
	int i;
	int j;
	int comma = ',';
	int space = ' ';

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i < '8' || j < '9')
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
