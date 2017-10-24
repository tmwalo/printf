#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*null_buffer = 0;
	char	*buffer = ft_strdup("Zoroastra, ");

	merge_char_buffer(&null_buffer, 'X');
	printf("%s\n", null_buffer);
	merge_char_buffer(&buffer, 'Z');
	printf("%s\n", buffer);
	return (0);
}
