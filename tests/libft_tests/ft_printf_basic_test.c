#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	pret;
	int	ft_pret;

	pret = printf("The cat.");
	printf("\n");
	printf("pret: %d\n", pret);
	ft_pret = ft_printf("The cat.");
	printf("\n");
	printf("ft_pret: %d\n", ft_pret);

	pret = printf("%s", "Hands off");
	printf("\n");
	printf("pret: %d\n", pret);
	ft_pret = ft_printf("%s", "Hands off");
	printf("\n");
	printf("ft_pret: %d\n", ft_pret);

	pret = printf("Smile and %s", "wave boys.");
	printf("\n");
	printf("pret: %d\n", pret);
	ft_pret = ft_printf("Smile and %s", "wave boys.");
	printf("\n");
	printf("ft_pret: %d\n", ft_pret);

	pret = printf("The %s is in motion.", "Leprachaun");
	printf("\n");
	printf("pret: %d\n", pret);
	ft_pret = ft_printf("The %s is in motion.", "Leprachaun");
	printf("\n");
	printf("ft_pret: %d\n", ft_pret);

	pret = printf("%s, %s, strike ...", "One", "two");
	printf("\n");
	printf("pret: %d\n", pret);
	ft_pret = ft_printf("%s, %s, strike ...", "One", "two");
	printf("\n");
	printf("ft_pret: %d\n", ft_pret);

	return (0);
}
