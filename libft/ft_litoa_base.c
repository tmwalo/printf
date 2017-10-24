/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:20:26 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:20:47 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_litoa_base(long int value, int base)
{
	char				*str;
	int					index;
	unsigned long int	uns_value;
	char				*digits;

	digits = ft_strdup("0123456789ABCDEF");
	str = ft_strnew(ldigits_and_sign(value, base));
	if ((!digits) || (!str))
		return (0);
	if (value < 0)
		uns_value = (unsigned long int)(-value);
	else
		uns_value = (unsigned long int)value;
	index = ldigits_and_sign(value, base) - 1;
	str[index--] = digits[uns_value % base];
	while ((uns_value = uns_value / base) > 0)
		str[index--] = digits[uns_value % base];
	if ((base == 10) && (value < 0))
		str[index] = '-';
	free(digits);
	return (str);
}
