#include "holberton.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, r, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (sp = 0; sp < (size - 1) - r; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= r; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
