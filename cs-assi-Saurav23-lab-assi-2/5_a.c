#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;
  printf("The first number swapped : %d\n", a);
  printf("The second number swapped : %d", b);  
  return 0;
}
