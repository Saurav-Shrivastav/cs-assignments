#include<stdio.h>
int main()
{
char a;
printf("input the grade\n");
scanf("%c",&a);
if(a='e')
{
 printf("EXCELLENT");
}
else if(a='v')
{
printf("VERY GOOD");
}
else if(a='g')
{
printf("GOOD");
}
else if(a='a')
{
printf("AVERAGE");
}
else if(a='f')
{
printf("FAIL");
}
else
{
printf("input only E,V,G,A,F");
}
return 0;
}


