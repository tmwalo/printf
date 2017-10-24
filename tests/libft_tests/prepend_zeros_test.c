#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "800030303";
	char	num[] = "187";
	char	*mstr;
	char	*mnum;

	mstr = strdup(str);
	mnum = strdup(num);
	prepend_zeros(&mstr, 7);
	prepend_zeros(&mnum, 3);
	printf("%s\n", mstr);
	printf("%s\n", mnum);
	return (0);
}
