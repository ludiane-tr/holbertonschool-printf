#include "main.h"

/**
 *_int - function permit to print an integer
 *@args: argumets of va_list
 *Return: Void
 */

void _int(va_list args)
{
	int result = 0;
	long int numb = va_arg(args, int);
	char stk[20];
	int i = 0;

	if (numb < 0)
	{
		_putchar('-');
		numb = -numb;
		result++;
	}
	if (numb == 0)
	{
		_putchar('0');
		result++;
		return;
	}
	while (numb > 0)
	{
		stk[i++] = (numb % 10) + '0';
		numb /= 10;
	}
	while (i > 0)
	{
		_putchar(stk[--i]);
			result++;
	}

}
