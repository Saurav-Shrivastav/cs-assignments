#include <stdio.h>
void main()
{
	int i = 2;
	while(i<=500)
	{
		int isPrime = 1;
		int j=2;
		while(j<(i/2))
		{
			int rem = 0;
			rem = i%j;
			if(rem == 0)
			isPrime = 0;
			j++;
		}
		if(isPrime == 1)
		printf("%d\n", i);
		i++;
	}
}	
