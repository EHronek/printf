#include "main.h"
/**
  * printing_pointer - it should do printing of hex numbers to stdout
  * @val: the the arguments
  * Return: counter
  */
int printing_pointer(va_list val)
{
	void *ptr;
	char *str =  "null";
	long int x;
	int w, i;

	ptr = va_arg(val, void *);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
	x = (unsigned long int)ptr;
	_putchar(48);
	_putchar('x');
	w = printing_hex_support(x);
	return (w + 2);
}
