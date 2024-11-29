#include "main.h"

/**
 *_str - fonction that print a string
 *@args: arguments of va_list
 *Return: i
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');		
		return(6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
