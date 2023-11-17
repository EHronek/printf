#include "main.h"
/**
 * printing_rot13 - convert to rot13
 * @args: it is the printf arguments
 * Return: it is the counter
 *
 */
int printing_rot13(va_list args)
{
	int a, c, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char arr1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char arr2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		k = 0;
		for (c = 0; arr1[c] && !k; c++)
		{
			if (s[a] == arr1[c])
			{
				_putchar(arr2[c]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[a]);
			counter++;
		}
	}
	return (counter);
}
