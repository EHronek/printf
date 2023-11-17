#include "main.h"
/**
  * printing_character - it will be printing a character
  * @val: the aargument
  * Return: 0
  */
int printing_character(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (0);
}
