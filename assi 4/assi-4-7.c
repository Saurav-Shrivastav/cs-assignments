#include <stdio.h>
int main(){
float bs;
float gs;
float hra;
float da;
scanf("%d", &bs);
if(bs<=10000.0){
	hra=20.0;
	da=80.0;
}
else if(bs<=20000 && bs>=10000){
	hra=25.0;
	da=90;
}
else{
	hra=30;
	da=95;
}
gs= bs+ bs*(hra/100) + bs*(da/100);
printf("Gross salary is %d", &gs);
return 0;
}

