#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = -1;
	int len;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *tab = (int *)malloc(sizeof(int *) * len);
	if (start <= end)
		while(++i < len)
			tab[i] = start + i;
	else
		while(++i < len)
			tab[i] = start - i;
	return tab;
}

int *ft_rrange(int start, int end)
{
	ft_range(end, start);
}
