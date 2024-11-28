#include "main.h"

/**
 *_int - function permit to print an integer
 *@args: argumets of va_list
 *Return: total of characters
 */

int _int(va_list args)
{
	int result = 0;
	long int numb = va_arg(args, int);
	long int div = 1;
	int digit;

	if (numb < 0)
	{
		_putchar('-');
		numb = -numb;
		result++;
	}
	while (numb / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		digit = numb / div;
		_putchar(digit + '0');
		result++;
		numb %= div;
		div /= 10;
	}
	return (result);
}
