# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 12:12:03 by tmwalo            #+#    #+#              #
#    Updated: 2017/07/03 13:41:54 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXES = prepend_char prepend_zeros prepend_spaces prepend_zerox prepend_plus append_char append_spaces \
	digits_and_sign ldigits_and_sign udigits uldigits \
	ft_itoa_base ft_litoa_base ft_uitoa_base ft_ulitoa_base \
	merge_str_buffer merge_char_buffer \
	ft_strchrs

FLAGS = -Wall -Wextra -Werror

LIB = libft.a

fclean:
	/bin/rm -f $(EXES)

ft_putchar: ft_putchar_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putchar_fd: ft_putchar_fd_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putstr: ft_putstr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putstr_fd: ft_putstr_fd_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putendl: ft_putendl_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putendl_fd: ft_putendl_fd_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_striter: ft_striter_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_striteri: ft_striteri_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memset: ft_memset_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_bzero: ft_bzero_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memcpy: ft_memcpy_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memccpy: ft_memccpy_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memmove: ft_memmove_test.c
	gcc -o $@ $@_test.c -L. -lft

ft_memchr: ft_memchr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memcmp: ft_memcmp_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memalloc: ft_memalloc_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_memdel: ft_memdel_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strnew: ft_strnew_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strdel: ft_strdel_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strclr: ft_strclr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strcpy: ft_strcpy_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strncpy: ft_strncpy_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strdup: ft_strdup_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strcat: ft_strcat_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strncat: ft_strncat_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strlcat: ft_strlcat_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strchr: ft_strchr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strrchr: ft_strrchr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_atoi: ft_atoi_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strstr: ft_strstr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_isascii: ft_isascii_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_isprint: ft_isprint_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strnstr: ft_strnstr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strcmp: ft_strcmp_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strncmp: ft_strncmp_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_itoa: ft_itoa_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putnbr_fd: ft_putnbr_fd_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_putnbr: ft_putnbr_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strtrim: ft_strtrim_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strsplit: ft_strsplit_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strlen: ft_strlen_test.c
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

prepend_char: prepend_char_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

prepend_zeros: prepend_zeros_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

prepend_spaces: prepend_spaces_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

prepend_zerox: prepend_zerox_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

prepend_plus: prepend_plus_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

append_char: append_char_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

append_spaces: append_spaces_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

digits_and_sign: digits_and_sign_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ldigits_and_sign: ldigits_and_sign_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

udigits: udigits_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

uldigits: uldigits_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_itoa_base: ft_itoa_base_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_litoa_base: ft_litoa_base_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_uitoa_base: ft_uitoa_base_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_ulitoa_base: ft_ulitoa_base_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

merge_str_buffer: merge_str_buffer_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

merge_char_buffer: merge_char_buffer_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_printf_basic: ft_printf_basic_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)

ft_strchrs: ft_strchrs_test.c $(LIB)
	gcc -o $@ $@_test.c -L. -lft $(FLAGS)
