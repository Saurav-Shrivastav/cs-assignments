#include <stdio.h>
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	int rev_num=0;
	//it is given that the number is a 3 digit one. so it saves us from one loop.
	while(num>0) {
		rev_num = rev_num*10 + num%10;
		num=num/10;
	}
	printf("reverse of the nummber is %d", rev_num);
}
