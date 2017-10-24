#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("Call ft_ulitoa_base() with n = 187, base 2, string: %s\n", ft_ulitoa_base(187, 2));
	printf("Call ft_ulitoa_base() with n = 3783, base 10, string: %s\n", ft_ulitoa_base(3783, 10));
	printf("Call ft_ulitoa_base() with n = 11 327 509, base 8, string: %s\n", ft_ulitoa_base(11327509, 8));
	printf("Call ft_ulitoa_base() with n = 70 233 854, base 16, string: %s\n", ft_ulitoa_base(70233854, 16));
	printf("Call ft_ulitoa_base() with n = 0, base 4, string: %s\n", ft_ulitoa_base(0, 4));
	printf("Call ft_ulitoa_base() with n = 3 147 483 648, string: %s\n", ft_ulitoa_base(3147483648, 10));
	return (0);
}
