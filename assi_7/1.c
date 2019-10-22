#include <stdio.h>
int fact(int s);
int main(){
	int n, sum;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		sum = sum + (fact(i)/i) ;
	}
	printf("%d", sum);
}
int fact(int s){
	int t=1;
	for(int i=1; i<=s; i++){
		t = t*i;
	}
	return t;
}
