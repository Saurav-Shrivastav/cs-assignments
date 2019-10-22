#include <stdio.h>
int main()
{
	int i = 2;
	do
	{
		int isPrime = 1;
		int j=2;
		do
		{
			int rem = 0;
			rem = i%j;
			if(rem == 0)
			isPrime = 0;
			j++;
		}while(j<(i/2));
		if(isPrime == 1)
		printf("%d\n", i);
		i++;
	}while(i<=500);
}
