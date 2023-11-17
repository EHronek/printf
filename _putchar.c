#include "main.h"
/**
  * _putchar - outputs characters to the stdout console
  * @c: the char to be printed
  * Return: success (0) on error return -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
