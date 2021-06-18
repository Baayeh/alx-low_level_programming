#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (j > i && k > j)
				{
					if (i == '0' && j == '1' && k == '2')
					{
						write(1, "0", 1);
						write(1, "1", 1);
						write(1, "2", 1);
					} else
					{
						putchar(',');
						putchar(' ');
						putchar(i);
						putchar(j);
						putchar(k);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
