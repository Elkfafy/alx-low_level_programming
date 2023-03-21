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

	if (n < 0)
		n *= -1;
	result = n % 10;
	_putchar(result + '0');
	return (result);
}
