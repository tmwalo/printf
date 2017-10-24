/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepend_zerox.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:37:26 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:37:37 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		prepend_zerox(char **str, int lower_case)
{
	int		ret;

	ret = 0;
	if (lower_case == 1)
		ret = prepend_char(str, 'x', 1);
	else if (lower_case == 0)
		ret = prepend_char(str, 'X', 1);
	if (ret == 1)
		ret = prepend_zeros(str, 1);
	return (ret);
}
