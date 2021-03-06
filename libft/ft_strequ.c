/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:02:06 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/24 13:31:50 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if ((s1 != NULL) && (s2 != NULL))
	{
		while (*s1 == *s2)
		{
			if (*s1 == '\0')
				return (1);
			++s1;
			++s2;
		}
	}
	return (0);
}
