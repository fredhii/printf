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
	void (*fun)();
} loki;

/* Auxiliar prototypes */
char *_itoa(long int num, int base);
char *_utoa(unsigned int num, int base);
char *_upper_itoa(long int num, int base);
void _reverse(char *str);
int _strlen(char *str);
/* Main prototypes */
void p_char(char *buffer, va_list freya, int *move);
void p_string(char *buffer, va_list freya, int *move);
void p_prcnt(char *buffer, va_list freya, int *move);
void p_doub(char *buffer, va_list freya, int *move);
void p_int(char *buffer, va_list freya, int *move);
/* Others prototypes */
void p_binary(char *buffer, va_list freya, int *move);
void p_un_int(char *buffer, va_list freya, int *move);
void p_hex(char *buffer, va_list freya, int *move);
void p_hex2(char *buffer, va_list freya, int *move);
void p_rev(char *buffer, va_list freya, int *move);
void p_rot13(char *buffer, va_list freya, int *move);
void p_address(char *buffer, va_list freya, int *move);
/* Prototypes */
int _printf(const char *format, ...);
loki *dictionary();

#endif
