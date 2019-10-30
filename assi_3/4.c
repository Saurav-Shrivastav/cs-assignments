#include <stdio.h>
int main() {
    int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Largest number is: %d\n", ((a>b) ? ((a>c) ? a :c ) : ((b>c) ? b : c )));
	printf("Smallest number is: %d", ((a<b) ? ((a<c) ? a :c ) : ((b<c) ? b : c )));
}
