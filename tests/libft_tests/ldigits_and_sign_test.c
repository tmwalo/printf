#include <stdio.h>
#include "libft.h"
#include <limits.h>

int	main(void)
{
	printf("0, base 10: %d\n", ldigits_and_sign(0, 10));
	printf("7, base 2: %d\n", ldigits_and_sign(7, 2));
	printf("288, base 8: %d\n", ldigits_and_sign(288, 8));
	printf("592, base 16: %d\n", ldigits_and_sign(592, 16));
	printf("Int min. : %d\n", ldigits_and_sign(INT_MIN, 10));
	return (0);
}
