#include <stdio.h>
int main(){
	printf("Enter a floating point number : ");
	float f;
	scanf("%f", &f);
	printf("%d \n%d \n%d", (int)f%10, (int)f%100, (int)f);
	return f;
}
