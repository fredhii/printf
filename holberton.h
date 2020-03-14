#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Libraries */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Structure definiton */
typedef struct thor
{
	char type;
	char *(*functions)();
} loki;

/* Prototypes */
int _printf(const char *format, ...);
int _strlen(char *str);
char *p_char(char *buffer, va_list freya);
loki *dictionary();

#endif
