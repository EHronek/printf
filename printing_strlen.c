#include "main.h"
/**
  * _strlen - it should find the length of a string
  * @str: the string
  * Return: it should return an integer
  */
int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
/**
  * _strlen_c - finds the length of string constants
  * @str_c: char pointer
  * Return: an integer length
  */
int _strlen_c(const char *str_c)
{
	int length_c;

	for (length_c = 0; str_c[length_c] != '\0'; length_c++)
		;
	return (length_c);
}
