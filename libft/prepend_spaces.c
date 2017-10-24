/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepend_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:36:17 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:36:25 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		prepend_spaces(char **str, unsigned int num)
{
	return (prepend_char(str, ' ', num));
}
