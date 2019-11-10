
#include <stdlib.h>

int        *ft_rrange(int start, int end)
{
	int *tab;
	int diff = 0;
	int i = 0;

	if (start > end)
		diff = start - end + 1;
	if (start < end)
		diff = end - start + 1;
	if (start == end)
	{
		tab = malloc(sizeof(int));
		tab[0] = start;
		return (tab);
	}
	tab = malloc(sizeof(int) * diff);
	while (i < diff && start > end)
	{
		tab[i] = end + i;
		i++;
	}
	while (i < diff && start < end)
	{
		tab[i] = end - i;
		i++;
	}
	return (tab);
}

int main()
{
	int *tab;
	int i;
	tab = ft_rrange(5, -5);
	while (i < 11)
{
		printf("%d\n", tab[i]);
		i++;
	}
}
