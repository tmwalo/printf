/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ldigits_and_sign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:26:28 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:26:44 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ldigits_and_sign(long int value, int base)
{
	unsigned long int	uns_value;
	int					len;

	if (value == 0)
		return (1);
	len = 0;
	if ((base == 10) && (value < 0))
		++len;
	if (value < 0)
		uns_value = (unsigned long int)(-value);
	else
		uns_value = (unsigned long int)value;
	while (uns_value > 0)
	{
		++len;
		uns_value = uns_value / base;
	}
	return (len);
}
