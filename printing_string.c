#include "main.h"
/**
  * printing_string - it should print a string to the stdout
  * @val: the argument
  * Return: the length of the string
  */
int printing_string(va_list val)
{
	int i;
	char *string;
	int string_length;

	string = va_arg(val, char *);
	if (string == NULL)
	{
		string = "NULL";
		string_length = _strlen(string);
		for (i = 0; i < string_length; i++)
			_putchar(string[i]);
		return (string_length);
	}
	else
	{
		string_length = _strlen(string);
		for (i = 0; i < string_length; i++)
			_putchar(string[i]);
		return (string_length);
	}
}
