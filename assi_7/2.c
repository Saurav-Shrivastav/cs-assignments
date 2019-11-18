#include <stdio.h>
int count_even(int *a);
int count = 0;
int main(){
	int num, n,  i=1;
	printf("How many numbers do you wish to enter?");
	scanf("%d", &n);
	while(i<=n){
		scanf("%d", &num);
		count_even(&num);
		i++;
	}
	printf("%d", count);
}

int count_even(int *a){
	if(*a%2==0){
		count++;
	}
}

