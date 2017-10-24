/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_char_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:27:15 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:27:28 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		merge_char_buffer(char **buffer, char c)
{
	char	src_str[2];
	char	*src;

	src_str[0] = c;
	src_str[1] = '\0';
	src = ft_strdup(src_str);
	return (merge_str_buffer(buffer, &src));
}
