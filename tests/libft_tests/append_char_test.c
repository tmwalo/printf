#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "The Birds.";
	char	num[] = "187";
	char	*mstr;
	char	*mnum;

	mstr = strdup(str);
	mnum = strdup(num);
	append_char(&mstr, ' ', 7);
	append_char(&mnum, '0', 3);
	printf("%s\n", mstr);
	printf("%s\n", mnum);
	return (0);
}
