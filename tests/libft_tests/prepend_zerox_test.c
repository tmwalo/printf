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
	prepend_zerox(&mstr, 1);
	prepend_zerox(&mnum, 0);
	printf("%s\n", mstr);
	printf("%s\n", mnum);
	return (0);
}
