#include "main.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments
 * Return: void
 */
int _printf(const char *format, ...)
{
	char spec[] = {'c', 's', '%', 'd', 'i'};

	va_list ap;

	int i;

	int s = 0;

	if (format == NULL || (format[0] == '%' && !format[1]) || (format[0] ==
				'%' && format[1] == ' ' && !format[2]))
		return (0);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		switch (_bool(format, spec, i))
		{
			case 1:
				s = _print_strin(va_arg(ap, char *), &s, &i);
				break;
			case 2:
				s = s + _putchar(va_arg(ap, int));
				i++;
				break;
			case 3:
				s = s + _print_number2(va_arg(ap, int));
				i++;
				break;
			case 4:
				write(1, &spec[2], 1);
				s++;
				i++;
				break;
			default:
				s = s + _putchar(format[i]);
				break;
		}
	}
	va_end(ap);
	return (s);
}
