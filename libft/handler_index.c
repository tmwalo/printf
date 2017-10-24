/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:31:25 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 15:50:17 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		handler_index(char conv_char)
{
	char	*conv_chars_array;
	int		index;

	index = 0;
	conv_chars_array = ft_strdup("sSpdDioOuUxXcC");
	if (!conv_chars_array)
		return (-1);
	while (*conv_chars_array != '\0')
	{
		if (*conv_chars_array == conv_char)
		{
			free(conv_chars_array);
			return (index);
		}
		++index;
		++conv_chars_array;
	}
	free(conv_chars_array);
	return (-1);
}
