#include <stdio.h>
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("It's octal  equivalent is %o \n", num);
	printf("It's hexadecimal equivalent is %0X \n", num);
	// code for binary equivalent is not there 
	return 0;
}
