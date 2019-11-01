#include <stdio.h>
int main(){
	int i,spaces=4, z=1,t=0;
	for(i=1 ; i<=5 ; i++){
		int count;
		for(spaces=0 ; spaces<=5-i-1 ; spaces++){ //this loop prints the spaces 
			printf("  ");
		}
		for(count=i ; count<=z ; count++ ){     //this loop prints he numbers
			printf("%d ", count);
		}
		t = (i-1)*2;
		for(t ; t>=i ; t-- ){
			printf("%d ", t);
		}
		printf("\n");
		z +=2;
	}
	return 0;
}
