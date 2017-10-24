/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:13:48 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:14:40 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		append_char(char **str, char c, unsigned int num)
{
	char	*prepend_str;
	char	*new_str;

	prepend_str = ft_strnew(num);
	if (!prepend_str)
		return (0);
	ft_memset(prepend_str, c, sizeof(char) * num);
	new_str = ft_strjoin(*str, prepend_str);
	if (!new_str)
		return (0);
	free(prepend_str);
	free(*str);
	*str = new_str;
	return (1);
}
