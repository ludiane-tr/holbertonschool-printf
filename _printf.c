#include "main.h"

/**
 * _printf - create a printf command.
 * @format: specifiers
 *
 * Return: numbers of caracters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += _format(format[i + 1], args);
			i++;
		}
		else
		{
			count++;
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
