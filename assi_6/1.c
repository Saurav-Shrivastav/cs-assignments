#include <stdio.h>
int main(){
	int row=0;
	while(row<5){
		int i=1;
		while(i<=5){
			printf("%d  ", i);
			i++;
		}
		printf("\n");
		row++;
	}
	return 0;
}
