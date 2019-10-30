#include <stdio.h>
int main() {
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	int s = n*n;
	printf("%s", ((s%1000)==n) ? "Yes" : "No"); /*It is given that the input
	is a three digit number so making use of that */
	return 0;
}
