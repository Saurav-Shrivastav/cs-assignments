#include <stdio.h>
#include <math.h>

void Prime (int num) {
	int check=0;
	int i;
	for(i=2; i<num; i++){
		if(num%i==0){
			check++;
		}
		}
	if(check>0){
		printf("It is not a prime number\n");
	}
	else 
	printf("It is a prime number\n");
	}

void Armstrong (int num) {
  int a, sum=0;
  int s=num;
  while(num!=0){
  	a=num%10;
  	sum=sum + pow(a,3);
	num=num/10;
  }
  printf("%s", (sum==s)  ? "It is an Armstrong number\n" : "It is not an Armstrong number\n");
}

void Perfect (int num) {
    int sum = 0;
    int i;
    for (i = 1; i < num; i++) {
        if (num % i == 0) 
            sum += i;
    }
    printf("%s", ((sum == num) ? "It is a Perfect number\n" : "It is not a Perfect numbe\nr"));
}

int main () {
    int num;
    printf("Enter the number to check : ");
    scanf("%d", &num);
    Prime(num);
    Armstrong(num);
    Perfect (num); 
}
