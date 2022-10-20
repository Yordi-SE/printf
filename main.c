#include "main.h"
/**
 */
int main(void)
{
	int u = _printf("%d\n", -1000);
	int f = printf("%i\n", -1000);
	_printf("%i\n%d\n", u, f);
	return (0);
}
