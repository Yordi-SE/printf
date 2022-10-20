#include "main.h"
/**
 * _print_number2 - print any number
 * @c: number to be printed
 * Return: int
 */
int _print_number2(long int c)
{
	int i;

	char u = '-';

	int j;

	int t;

	int r;

	int m;

	int *l;

	if (c < 0)
	{
		c = (c * -1);
		write(1, &u, 1);
	}
	i = count_size(c);
	l = malloc(sizeof(int) * i);
	t = c / 10;
	m = c % 10;
	j = 0;
	while
		(t > 0) {
			r = t;
			l[j] = m;
			m = r % 10;
			t = r / 10;
			j++;
		}
	l[j] = m;
	print_array(l, i);
	free(l);
	return (i);
}
/**
 * print_array - print array
 * Return: void
 * @array: array of int;
 * @o: size
 */
void print_array(int *array, int o)
{
	int t;

	int j;

	const int s[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (j = o - 1; j >= 0; j--)
		for (t = 0; t < 10; t++)
			if (array[j] == t)
				write(1, s + t, 1);
}
/**
 * count_size - count size of an array
 * @c: long int
 * Return: int
 */
int count_size(long int c)
{
	int t;

	int i = 1;

	int r;

	t = c / 10;
	while
		(t > 0) {
			r = t;
			i++;
			t = r / 10;
		}
	return (i);
}
