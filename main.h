#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printHEX(va_list X);
int printhex(va_list x);
int printstr(va_list s);
int printoctal(va_list o);
int printrot13(va_list R);
int printbinary(va_list b);
int printinteger(va_list i);
int print_unsign(va_list u);
int printdecimal(va_list d);

/**
 * struct format_identifiers - formatting specifiers
 * @sc : format specifiers
 * @q : format function
 */

typedef struct format_identifiers
{
	char *sc;
	int (*q)(char *format, va_list);
} structype;

#endif
