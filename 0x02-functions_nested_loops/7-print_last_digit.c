#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nb: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nb)
{
	int digit;

	digit = (nb % 10);

	return (digit);
}