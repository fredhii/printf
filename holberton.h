#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Libraries */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Structure definiton */
/**
 * struct thor - Functions list
 * @type: Identifier argument
 * @fun: Function
 * Description: Functions dictionary
 */
typedef struct thor
{
	char type;
	char *(*fun)();
} loki;

/* Auxiliar prototypes */
char *hand_buff();
int _strlen(char *str);
char *_itoa(int num, int base);
void _reverse(char *str);
/* Main prototypes */
char *p_char(char *buffer, va_list freya, int *move);
char *p_string(char *buffer, va_list freya, int *move);
char *p_prcnt(char *buffer, va_list freya, int *move);
char *p_doub(char *buffer, va_list freya, int *move);
char *p_int(char *buffer, va_list freya, int *move);

/* Prototypes */
loki *dictionary();
void print_all(char *buffer, int *move);
int _printf(const char *format, ...);

#endif
