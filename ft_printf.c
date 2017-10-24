/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:39:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 15:29:58 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_printf(const char *format, ...)
{
	va_list					ap;
	char					conv_char;
	char					*conv_spec;
	char					*buffer;
	char					*current_char;
	pt_conv_spec_handler	handlers[HANDLERS];

	va_start(ap, format);
	buffer = 0;
	current_char = (char *)format;
	init_handlers_array(handlers);
	while (*current_char != '\0')
	{
		if (*current_char != '%')
		{
			merge_char_buffer(&buffer, *current_char);
			++current_char;
		}
		else
		{
			ft_putstr("Enter else block:\n");
			conv_spec = ft_strdup("%s");
			conv_char = 's';
			handlers[handler_index(conv_char)](&conv_spec, &buffer, ap, &current_char);
			ft_putstr("Exit else block:\n");
		}
	}
	va_end(ap);
	/*  Must free buffer before returning char count or error int */
	ft_putstr("About to output buffer:\n");
	ft_putstr(buffer);
	return (ft_strlen(buffer));
}
