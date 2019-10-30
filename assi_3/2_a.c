#include <stdio.h>
#include <math.h>
int main() {
  int n;
  int a, sum=0;
  scanf("%d", &n);
  int s=n;
  while(n!=0){
  	a=n%10;
  	sum=sum + pow(a,3);
	n=n/10;
  }
  printf("%s", (sum==s)  ? "Yes" : "No");
  return 0;
}
