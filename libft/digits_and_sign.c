/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_and_sign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:15:41 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:15:48 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		digits_and_sign(int value, int base)
{
	unsigned int	uns_value;
	int				len;

	if (value == 0)
		return (1);
	len = 0;
	if ((base == 10) && (value < 0))
		++len;
	if (value < 0)
		uns_value = (unsigned int)(-value);
	else
		uns_value = (unsigned int)value;
	while (uns_value > 0)
	{
		++len;
		uns_value = uns_value / base;
	}
	return (len);
}
