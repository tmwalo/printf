/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepend_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:31:49 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:32:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		prepend_char(char **str, char c, unsigned int num)
{
	char	*prepend_str;
	char	*new_str;

	if (!str || (!*str))
		return (0);
	prepend_str = ft_strnew(num);
	if (!prepend_str)
		return (0);
	ft_memset(prepend_str, c, sizeof(char) * num);
	new_str = ft_strjoin(prepend_str, *str);
	if (!new_str)
		return (0);
	free(prepend_str);
	free(*str);
	*str = new_str;
	return (1);
}
