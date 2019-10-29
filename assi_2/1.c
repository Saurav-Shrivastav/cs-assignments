#include <stdio.h>
int main(){
	int basic_salary = 50000;
	int da = 0.5*basic_salary;
	int hra = 0.2*basic_salary;
	int va = 0.1*basic_salary;
	int gross_pay = basic_salary + da + hra + va;
	printf("%d", gross_pay);
	return 0;
}
