#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("Enter the angle in degrees : ");
	scanf("%d", &n);
	float rad = n*(3.14159/180);
	printf("The sin value is: %f \n The cos value is: %f", sin(rad), cos(rad));
	return 0;
}
