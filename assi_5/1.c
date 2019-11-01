#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int rev_num = 0;
	while(num>0){
		rev_num = rev_num*10 + num%10;
		num /=10;
	}
	while(rev_num>0){
		int s = rev_num%10;
		switch(s){
			case 0 : printf("zero ");
					 break;
			case 1 : printf("one ");
					 break;
			case 2 : printf("two ");
					 break;
			case 3 : printf("three ");
					 break;
			case 4 : printf("four ");
					 break;
			case 5 : printf("five ");
					 break;
			case 6 : printf("six ");
					 break;
			case 7 : printf("seven ");
					 break;
			case 8 : printf("eight ");
					 break;
			case 9 : printf("nine ");
					 break;
		}
		rev_num /=10;
		}
	return 0;	
	}
