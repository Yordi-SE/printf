#include "main.h"
/**
 * _print_number2 - print any number
 * @c: number to be printed
 * Return: int 
 */
int _print_number2(long int c)
{
	int j;

	int m;

	int i;

	char u = '-';

	long int t;

	long int r;

	int *l;

	const int s[] = {48, 49, 50, 51, 52, 53, 54, 55 ,56, 57};

	if (c < 0)
	{
		c = (long int) (c * -1);
		write(1, &u, 1);
	}
	i = count_size((long int) c);
	l = malloc(sizeof(int) * i);
	t = (long int) c / 10;
	m = (long int) c % 10;
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
	for (j = i - 1; j >= 0; j--)
		for (t = 0; t < 10; t++)
			if (l[j] == t)
				write(1, s + t, 1);
	free(l);
	return (i);
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
