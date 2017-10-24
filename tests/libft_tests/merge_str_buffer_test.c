#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src1 = ft_strdup("it's time.");
	char	*src2 = ft_strdup("it's time.");
	char	*null_buffer = 0;
	char	*buffer = ft_strdup("Zoroastra, ");

	merge_str_buffer(&null_buffer, &src1);
	printf("%s\n", null_buffer);
	merge_str_buffer(&buffer, &src2);
	printf("%s\n", buffer);
	return (0);
}
