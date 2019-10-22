#include <stdio.h>
void main()
{
	for(int i = 2; i<=500; i++)
	{
		int isPrime = 1;
		for(int j = 2; j<(i/2); j++)
		{
			int rem = 0;
			rem = i%j;
			if(rem == 0)
			isPrime = 0;
		}
		if(isPrime == 1)
		printf("%d\n", i);
	}
}		 
	
