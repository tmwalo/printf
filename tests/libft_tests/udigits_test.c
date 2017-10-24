#include <stdio.h>
#include "libft.h"
#include <limits.h>

int	main(void)
{
	printf("0, base 10: %d\n", udigits(0, 10));
	printf("7, base 2: %d\n", udigits(7, 2));
	printf("4 000 000 000, base 8: %d\n", udigits(4000000000, 8));
	printf("592, base 16: %d\n", udigits(592, 16));
	printf("Int max. : %d\n", udigits(INT_MAX, 10));
	return (0);
}
