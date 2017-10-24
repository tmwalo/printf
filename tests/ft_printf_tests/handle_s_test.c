#include "includes/libft.h"

int	handle_s(char **conv_spec, char **buffer, va_list ap, char **char_pos)
{
	char	*str;
	int	ret;

	ft_putstr("Print conv_spec:\n");
	ft_putstr(*conv_spec);
	ft_putstr("\n");
	if (ft_strcmp(*conv_spec, "%s") != 0)
		return (0);
	ft_putstr("Enter handle_s function:\n");
	ft_putstr("Call va_arg() fn. :\n");
	str = ft_strdup(va_arg(ap, char *));
	ft_putstr("Print str returned by va_arg() fn. :\n");
	ft_putstr(str);
	ft_putstr("\n");
	ft_putstr("Call merge_str_buffer() fn. :\n");
	ret = merge_str_buffer(buffer, &str);
	if (ret == 0)
		return (0);
	free(*conv_spec);
	ft_putstr("Increment char pos by 2 :\n");
	*char_pos = *char_pos + 2;
	return (1);
}
