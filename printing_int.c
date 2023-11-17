#include "main.h"
/**
  * printing_int - prints the integer
  * @args: the argument to be printed
  * Return: integer value
  */
int printing_int(va_list args)
{
	int v = va_arg(args, int);
	int num, t_last = v % 10, digit, exep = 1;
	int i = 1;

	v = v / 10;
	num = v;

	if (t_last < 0)
	{
		_putchar('-');
		num = -num;
		v = -v;
		t_last = -t_last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exep = exep * 10;
			num = num / 10;
		}
		num = v;
		while (exep > 0)
		{
			digit = num / exep;
			_putchar(digit + '0');
			num = num - (digit * exep);
			exep = exep / 10;
			i++;
		}
	}
	_putchar(t_last + '0');
	return (i);
}
#include "main.h"
/**
 * printing_dec - prints the integer
 * @args: the argument to be printed
 * Return: integer value
 */
int printing_dec(va_list args)
{
	int v = va_arg(args, int);
	int num, t_last = v % 10, digit, exep = 1;
	int i = 1;

	v = v / 10;
	num = v;
	if (t_last < 0)
	{
		_putchar('-');
		num = -num;
		v = -v;
		t_last = -t_last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exep = exep * 10;
			num = num / 10;
		}
		num = v;
		while (exep > 0)
		{
			digit = num / exep;
			_putchar(digit + '0');
			num = num - (digit * exep);
			exep = exep / 10;
			i++;
		}
	}
	_putchar(t_last + '0');
	return (i);
}
