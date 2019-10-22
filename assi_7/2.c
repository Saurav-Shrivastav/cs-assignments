#include <stdio.h>
int main(){
	int n;
	printf("enter the number of integers that you eish to check for being even or odd");
	scanf("%d", n);
	int arr1[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	printf("%d", arr1[1]);
	return 0;
}
//segmentation fault in this code so please check
