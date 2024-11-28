# Project _Printf function

## Description:

## function description:
-*function that produces output according to a format.*

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
-c
-s
-%

*Handle the following conversion specifiers:*

-d
-i

*man page for your function*

## Fonctions Prototypes:

-int _printf(const char *format, ...);
-int _int(va_list args);
-int _str(va_list args);
-int _putchar(char c);
-int _char (va_list args);
-int _percent(va_list args);
-int _format(const char result, va_list args);
