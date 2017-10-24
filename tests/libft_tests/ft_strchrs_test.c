#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char		*null_src = 0;
	char		*null_search_str = 0;
	const char	src[] = "This is the end.";
	char		search_abc[] = "abc";
	char		search_zgn[] = "zgn";

	printf("src: This is the end.\n");
	printf("Null src: %p\n", ft_strchrs(null_src, search_abc));
	printf("Null search_str: %p\n", ft_strchrs(src, null_search_str));
	printf("search_str: abc, ret: %p\n", ft_strchrs(src, search_abc));
	printf("search_str: zgn, ret: %p\n", ft_strchrs(src, search_zgn));
	return (0);
}
