#include <stdio.h>
int main(){
	int num;
	printf("Enter a three digit number: ");
	scanf("%d", &num);
	int rev_num = 0;
	int i = num;
	while(num>0){
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	printf("%s", ((rev_num == i) ? "Yes" : "No"));
	return 0;
	}
