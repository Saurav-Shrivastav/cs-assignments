#include <stdio.h>
int main(){
	int sum,n,num;
	for(num=1;num<=500;num++){
		sum=0;
		for(n=1;n<num;n++){
			if(num%n==0){
				sum=sum+n;
				}
      		}
    		if(sum==num){
      			printf("%d\n",num);
			}
		}
}
