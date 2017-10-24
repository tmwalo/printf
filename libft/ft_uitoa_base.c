/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:22:24 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:24:31 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_uitoa_base(unsigned int value, int base)
{
	char	*str;
	int		index;
	char	*digits;
	int		len;

	digits = ft_strdup("0123456789ABCDEF");
	len = udigits(value, base);
	str = ft_strnew(len);
	if ((!digits) || (!str))
		return (0);
	index = len - 1;
	str[index--] = digits[value % base];
	while ((value = value / base) > 0)
		str[index--] = digits[value % base];
	free(digits);
	return (str);
}
