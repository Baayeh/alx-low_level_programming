#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				if (i == '0' && j == '1')
				{
					putchar('0');
					putchar('1');
				} else
				{
					putchar(',');
					putchar(' ');
					putchar(i);
					putchar(j);
				}
			}
		}
	}
	return (0);
}
