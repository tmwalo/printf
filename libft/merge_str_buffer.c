/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_str_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:27:59 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:28:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		merge_str_buffer(char **buffer, char **src)
{
	char	*str;

	if (!buffer || !src || (!*src))
		return (0);
	if (!*buffer)
	{
		*buffer = ft_strdup(*src);
		if (!*buffer)
			return (0);
		free(*src);
		*src = 0;
		return (1);
	}
	else
	{
		str = ft_strjoin(*buffer, *src);
		if (!str)
			return (0);
		free(*buffer);
		free(*src);
		*buffer = str;
		return (1);
	}
}
