#include "main.h"
/**
  * printing_exec_string - prints exclusive strmg
  * @val: argument
  * Return: returns a an integer
  */
int printing_exec_string(va_list val)
{
	char *string;
	int i;
	int s_len = 0;
	int value;

	string = va_arg(val, char *);
	if (string == NULL)
	{
		string = "null";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 127 || string[i] < 32)
		{
			_putchar('\\');
			_putchar('x');
			s_len += 2;
			value = string[i];
			if (value < 16)
			{
				_putchar('0');
				s_len++;
			}
			s_len = s_len + print_HEX_support(value);
		}
		else
		{
			_putchar(string[i]);
			s_len++;
		}
	}
	return (s_len);
}
