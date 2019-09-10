#include <stdio.h>

int main () {
    int marks;
    printf("Enter the marks of the student : ");
    scanf("%d", &marks);

    switch (marks) {
        case 0 ... 29 : printf("Fail"); break;
        case 30 ... 49 : printf("D grade"); break;
        case 50 ... 59 : printf("C grade"); break;
        case 60 ... 89 : printf("B grade"); break;
        case 90 ... 100 : printf("A grade"); break;
        default : printf("Invalid Marks");
    }
    printf("\n");
}
