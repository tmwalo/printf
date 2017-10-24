#include "includes/libft.h"

char	*ft_strchrs(const char *src, char *search_str)
{
	char	*search_result;

	if ((!src) || (!search_str))
		return (0);
	while (*search_str != '\0')
	{
		search_result = ft_strchr(src, *search_str);
		if (search_result)
			return (search_result);
		++search_str;
	}
	return (0);
}
