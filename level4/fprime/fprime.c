#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = atoi(av[1]);
		int i = 1;
		if (a == 1)
			printf("1");
		while(a >= ++i)
		{
			if (a % i == 0)
			{
				printf("%d", i);
				if (a == i)
					break;
				printf("*");
				a /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}
