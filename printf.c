#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* _printf -  format function that prints output to stdout
* @format : the format specifier
* Return : the size of the output text printed successfully
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i, hesabu = 0;
	structype types[] = {
		{"h", printhex},
		{"s", printstr},
		{"c", print_char},
		{"i", printint},
		{"H", printHEX},
		{"b", printbinary},
		{"o", printoctal},
		{"R", printrot13}
		{"u", printunsign},
		{"d", printdecimal},
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int j = 0;

			while (types[j].sc != NULL)
			{
				if (format[i + 1] == types[j].sc[0])
				{
					hesabu += types[j].q((char *)&format[i], args);
					break;
				}
				j++;
			}

			if (types->sc == NULL && format[i + 1] != ' ')
			{
				_putchar('%');
				_putchar(format[i + 1]);
				hesabu += 2;
			}

			i++;
		}
		else
		{
			_putchar(format[i]);
			hesabu++;
		}
	}

	va_end(args);

	return (hesabu);
}
