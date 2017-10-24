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
	char					*format_begin;
	char					*search_result;
	pt_conv_spec_handler	handlers[HANDLERS];

	va_start(ap, format);
	buffer = 0;
	current_char = (char *)format;
	format_begin = current_char;
	init_handlers_array(handlers);
	while (*current_char != '\0')
	{
		if (*current_char != '%')
		{
			merge_char_buffer(&buffer, *current_char);
			++current_char;
		}
		else if (*(current_char + 1) == '%')
		{
			// Move to second %
			++current_char;
			merge_char_buffer(&buffer, *current_char);
			// Move to next char after %
			++current_char;
		}
		else
		{
			search_result = ft_strchrs((const char *)current_char, "sSpdDioOuUxXcC");
			if (search_result)
				conv_spec = ft_strsub((char const *)format_begin, current_char - format_begin, search_result - current_char + 1);
			else
				return (-1);
			conv_char = *search_result;
			handlers[handler_index(conv_char)](&conv_spec, &buffer, ap, &current_char);
		}
	}
	va_end(ap);

	/*  Must free buffer before returning char count or error int */
	
	/* Include error handling for when handler fn.s return -1 */
	
	ft_putstr(buffer);
	return (ft_strlen(buffer));
}
