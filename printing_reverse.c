#include "main.h"

/**
 * printing_reverse - the function should print a str in reverse
 * @args: the type struct va_arg where is allocated printf arguments
 *
 * Return: the actual string
 */
int printing_reverse(va_list args)
{

	char *string = va_arg(args, char*);
	int b = 0;
	int a;

	if (string == NULL)
		string = "(null)";
	while (string[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(string[a]);
	return (b);
}
