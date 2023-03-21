#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: input number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
		result *= -1;
	_putchar(result + '0');
	return (result);
}
