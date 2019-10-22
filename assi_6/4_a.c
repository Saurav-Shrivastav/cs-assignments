#include <stdio.h>

int main()
{
	int i = 1;
	while(i < 6)
	{
		int j = 1;
		while(j < 11)
		{
			printf("%d\t", i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}				
