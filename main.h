#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
  * struct format - it is aconverter for the printf function
  * @id: the type char pointer of the specifier
  * @func: function for the conversion specifier
  */
typedef struct format
{
	char *id;
	int (*func)();
}matching;

int _putchar(char c);
int _printf(const char *format, ...);
int printing_character(va_list val);
int _strlen_c(const char *str_c);
int _strlen(char *str);
int printing_string(va_list val);
int printing_37(void);
int printing_int(va_list args);
int printing_dec(va_list arg);
int printing_binary(va_list val);
int printing_unsigned(va_list args);
int printing_octal(va_list val);
int printing_hexd(va_list val);
int printing_HEXD(va_list val);
int printing_pointer(va_list val);
int printing_exec_string(va_list val);
int printing_hex_support(unsigned long int number);
int print_HEX_support(unsigned int number);
int printing_reverse(va_list args);
int printing_rot13(va_list args);
#endif
