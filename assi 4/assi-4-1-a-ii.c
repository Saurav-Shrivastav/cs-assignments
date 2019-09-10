#include <stdio.h>
int main(){
int a, b, c;
printf("enter three numbers\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b && b>c){
  printf("%d is the largest number", a);
}
else if(b>c && b>a){
  printf("%d is the largest number", b);
}
else if(c>a && c>b){
  printf("%d is the largest number", c);
}
return 0;
}
