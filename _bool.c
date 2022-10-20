#include "main.h"
/**
 * _bool - print_all
 * Return: int
 * @format: string
 * @spec: string
 * @i: integer
 */
int _bool(const char *format, char *spec, int i)
{
	if (!format || (format[0] == '%' && !format[1]) || (format[0] ==
				'%' && format[1] == ' ' && !format[2]))
		return (-1);
	if ((format[i] == spec[2]) &&
			(format[i + 1] == spec[1]))
		return (1);
	else if ((format[i] == spec[2]) &&
			(format[i + 1] == spec[0]))
		return (2);
	else if ((format[i] == spec[2]) && ((format[i + 1]
					== spec[3]) || (format[i + 1] ==
						spec[4])))
		return (3);
	else if ((format[i] == spec[2]) && (format[i + 1]
					== spec[2]))
		return (4);
	return (5);
}
