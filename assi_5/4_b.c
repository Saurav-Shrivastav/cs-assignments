#include <stdio.h>
int main(){
	int i=0, spaces;
	int j, coef=1;
	for(i ; i<=5 ; i++){
		spaces = 0;
		for(spaces ; spaces<(10-(i)*2) ; spaces++){
			printf(" ");
		}
		for(j=0; j <= i; j++)
            {
                if (j==0 || i==0)
                    coef = 1;
                else
                    coef = coef*(i-j+1)/j;
                printf("%4d", coef);
            }
		printf("\n");
	}
	return 0;
}
