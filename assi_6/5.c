#include <stdio.h>
int add(int s, int t);
int div(int s, int t);
int mul(int s, int t);
int sub(int s, int t);
int main(){
	char func[3];
	int n, a, b;
	printf("Specify the function that you wish to carry out on the given two numbers");
	scanf("%s", &func);
	printf("Specify the numbers");
	scanf("%d %d", &a, &b);
	if(strcmp(func ,"add" ) == 0){
		n = add(a, b);
	}
	else if(strcmp(func, "mul") == 0){
		n = mul(a, b);
	}
	else if(strcmp(func, "div") == 0){
		n = div(a, b);
	}
	else if(strcmp(func, "sub") == 0){
		n = sub(a, b);
	}
	else{
		printf("Please enter a valid function");
	}
	printf("%d", n);
}
int add(int s, int t){
	int x;
	x = s+t;
	return x;
}
int mul(int s, int t){
	int x;
	x = s*t;
	return x;
}
int sub(int s, int t){
	int x;
	x = s-t;
	return x;
}
int div(int s, int t){
	int x;
	x = s/t;
	return x;
}


