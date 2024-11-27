#include "main.h"

/**
 *_str - fonction that print a string
 *@args: arguments of va_list
 *Return: i
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_args(args, char *);

	if (str == NULL)
	{
		return (0);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
