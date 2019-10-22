#include <stdio.h>

void main(){
int d;
float f;
char c;
char s[10];
printf("Enter an integer\n");
scanf("%d", &d);
printf("you entered %d \n", d);
printf("Enter a decimal\n");
scanf("%f", &f);
printf("you entered %f \n", f);
printf("Enter a character\n");
scanf("%c", &c);
printf("you entered %c \n", c);
printf("Enter a string\n");
scanf("%s", &s);
printf("you entered %s \n", s);
return 0;
}
