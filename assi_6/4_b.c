#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		int j = 1;
		do
		{
			printf("%d\t", i*j);
			j++;
		}while(j < 11);
		printf("\n");
		i++;
	}while(i < 6);
}
