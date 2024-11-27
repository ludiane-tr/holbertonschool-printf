#ifndef MAIN_H
#define MAIN_H

/* library */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spe - struct specifiers
 * @spe: specifiers that indicate the type and result.
 * @f: fonction pointer
 */

typedef struct spe
{
	char *spe;
	int (*f)(va_list);
} spe_t;

/* Prototype */

int _printf(const char *format, ...);
void _int(va_list args);
int _str(va_list args);
int _putchar(char c);

#endif
