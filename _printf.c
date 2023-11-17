#include "main.h"
/**
 * _printf - it should selects the correct function to print.
 * @format: identifier to look for.
 * Return: length of the string.
 */
int _printf(const char * const format, ...)
{
	matching p[] = {
		{"%s", printing_string}, {"%c", printing_character},
		{"%%", printing_37},
		{"%i", printing_int}, {"%d", printing_dec}, {"%r", printing_reverse},
		{"%R", printing_rot13}, {"%b", printing_binary},
		{"%u", printing_unsigned},
		{"%o", printing_octal}, {"%x", printing_hexd}, {"%X", printing_HEXD},
		{"%S", printing_exec_string}, {"%p", printing_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
			{
				length += p[j].func(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
