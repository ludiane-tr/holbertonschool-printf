# Project _Printf function

## Description:

### Environment:

- Ubuntu 20.04
- GitHub

### Betty style:

- The code use the Betty style. <br />
- https://github.com/hs-hq/Betty/blob/main/betty-doc.pl <br />

### Compilation command:

> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


### function description:

_printf is custom part of standar function printf. <br />
The Produce outpout according to a specifers format. <br />
The function write to the standard outpout. <br />

### Requirments:
- [x] Allowed editors : vi, vim, emacs <br />
- [x] Our files compile on Ubuntu 20.04 LTS <br />
- [x] Our code of respect Betty code Style and Betty Doc <br />
- [x] We don't use global variables <br />
- [x] We have no more than five functions per file <br />
- [x] All function prototypes can be found in main.h <br />

## Contain:

### Files:
- **_percent.c:** 'function write the percent specifiers' <br />
- **_char.c:** 'function print char' <br />
- **_int.c:** 'function print a integer' <br />
- **_putchar.c:** 'fuction write single character to the standard outpout' <br />
- **_str.c:** 'function print sequence of characters terminated with a NULL' <br />
- **format.c:** 'function convert specifiers' <br />
- **_printf:** 'function reproduce the standard library 'printf()' <br />
- **main.c:** 'test function' <br />
- **main.h:** 'The header file contain all prototypes, libraries and the struct' <br />
- **man_3_printf:** 'Manuel _printf'

### Fonctions Prototypes:

- int _printf(const char *format, ...); <br />
- int _int(va_list args); <br />
- int _str(va_list args); <br />
- int _putchar(char c); <br />
- int _char (va_list args); <br />
- int _percent(va_list args); <br />
- int _format(const char result, va_list args); <br />

### Specifiers:
| **Specifiers**|                Description               |
|:-------------:|:----------------------------------------:|
|  **%c**       |Print a single character                  |
|  **%s**       |Print a string of character               |
|  **%%**       |Print a literal '%' character             |
|  **%d**       |Print a decimal number in base 10         |
|  **%i**       |Print an integer number in base 10        |

### Exemple code:
- **_printf:** <br />
if (!format || (format[0] == '%' && !format[1])) <br />
		return (-1); <br />

- **_int:** <br />
if (numb < 0) <br />
	{ <br />
		_putchar('-'); <br />
		numb = -numb; <br />
		result++; <br />

- **format.c** <br />
while (sps[i].spe) <br />
	{ <br />
		if (result == sps[i].spe) <br />
			return (sps[i].f(args)); <br />

## Flow chart:



## Autors
> **TROUILLEFOU Ludiane** (ludiane-tr) C#25  <br />
> **BAROUX Jordan** (JoBEph) C#25 <br />
