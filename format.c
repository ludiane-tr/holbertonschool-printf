#include "main.h"

/**
 *_format - fonction for specifiers.
 *@result: coversion for the specifiers.
 *@args: arguments of va_list
 *Return: result
 */

int _format(const char result, va_list args)
{
	spe_t sps[] = {
		{"s", _str},
		{"c", _char},
		{"d", _int},
		{"i", _int},
		{"%", _percent},
		{NULL, NULL}
	};
	int i = 0;

	while (sps[i].spe)
	{
		if (result == sps[i].spe)
		return (sps[i].f(args));
		i++;
	}
	_putchar('%');
	_putchar(result)

	return (2);
}
