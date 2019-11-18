#include <stdio.h>

int computeGross(int *a, int *b, int *c, int *gross_sal) {
	*gross_sal = *a + *b + *c;
    return *gross_sal;
}

int main() {
    int basicPay;
    printf("Enter the basic pay of the employee : ");
    scanf("%d", &basicPay);
    int DA = 0.2*basicPay;
    int HRA = 0.1*basicPay;
    int gross_sal=0;
    printf("The gross salary of the employee : %d", computeGross(&basicPay, &DA, &HRA, &gross_sal));
}
