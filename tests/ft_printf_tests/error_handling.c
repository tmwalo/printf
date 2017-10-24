/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:10:56 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/14 10:11:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/includes/libft.h"

int	main(void)
{
	int	ret;
	int	val = 13;
	char	*str = "There was a boy...";

	printf("Printf error handling:\n");

	printf("Empty string:\n");
	ret = printf("");
	printf("return: %d\n", ret);
	ret = ft_printf("");
	ft_printf("return: %d\n", ret);

	printf("Missing specification character:\n");
	ret = printf("%\n", val);
	printf("return: %d\n", ret);
	ret = ft_printf("%\n", val);
	ft_printf("return: %d\n", ret);

	printf("Unknown spec char:\n");
	ret = printf("%T\n", val);
	printf("return: %d\n", ret);
	ret = ft_printf("%T\n", val);
	ft_printf("return: %d\n", ret);

	printf("Missing argument:\n");
	ret = printf("%s\n", );
	printf("return: %d\n", ret);
	ret = ft_printf("%s\n", );
	ft_printf("return: %d\n", ret);

	printf("Unknown chars inside conv. spec:\n");
	ret = printf("% ? k3000 s\n", str);
	printf("return: %d\n", ret);
	ret = ft_printf("% ? k3000 s\n", str);
	ft_printf("return: %d\n", ret);

	/*

	printf(":\n");
	ret = printf("\n", );
	printf("return: %d\n", ret);
	ret = ft_printf("\n", );
	ft_printf("return: %d\n", ret);

	*/

	return (0);
}
