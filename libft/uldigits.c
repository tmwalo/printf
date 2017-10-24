/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uldigits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:38:47 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:38:59 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uldigits(unsigned long int value, int base)
{
	int		len;

	if (value == 0)
		return (1);
	len = 0;
	while (value > 0)
	{
		++len;
		value = value / base;
	}
	return (len);
}
