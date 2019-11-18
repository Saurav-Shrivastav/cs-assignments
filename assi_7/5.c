#include <stdio.h>

int factorial(int x) {
    if (x > 1) {
    	return factorial(x-1) * x;
	}
    else return 1; 
}

void Strong(int num) {
    int sum = 0, check = num;
    while (num) {
        sum += factorial(num % 10);
        num /= 10;
    }
    if (sum == check) {
    	printf("%d  ", check);
	}
}

int main() {
    int lowerLim, upperLim;
    printf("Enter the lower limit of the range :\n ");
    scanf("%d", &lowerLim);
    printf("Enter the upper limit of the range : \n");
    scanf("%d", &upperLim);
    printf("The strong numbers between %d and %d are :\n", lowerLim, upperLim);
    int i;
    for (i = lowerLim; i <= upperLim; i++) {
        Strong(i);
    }
}
