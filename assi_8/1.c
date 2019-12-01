#include "prog1.h"
#include <stdio.h>
int display(int n);       // call by value
void min_max(int n);       // call by value
void count(int *n);        // call by reference
int student_array[100];
int avg;
int freq[20];
int main(){
  int n;
  printf("Enter the number of students in the class: ");
  scanf("%d", &n);
  int i = 0;
  printf("\nEnter the marks of the students:");
  for (i; i < n; i++) {
        int check;
        scanf("%d", &check);
        if (check >= 0 && check <= 100)
            student_array[i] = check;
        else {
            printf("Marks exceed the limits, try again !\n");
        }
        freq[i] = -1;
    }
  printf("The marks entered by you are : \n");
  int sum = display(n);
  avg = sum/n;
  min_max(n);
  printf("The sum of the marks is %d\n", sum);
  printf("The avg of the marks is %d\n", avg);
  count(&n);
}

int display(int a){
  if(a >= 1){
  	printf("%d  ", student_array[a-1]);
  }
  else{
  	printf("\n");
  }
  if(a != 0){
    return student_array[a] + display((a)-1);
  }
  else{
    return student_array[a] ;
  }
}

void min_max(int n){
  int i = 0, max = 0, min =100;
  for(i ; i<n ; i++){
    if(student_array[i]>max){
      max = student_array[i];
    }
    if(student_array[i]<min){
      min = student_array[i];
    }
  }
  printf("The maximum marks scored are %d \nThe minimum marks scored are %d \n", max, min);
}

void count(int *n){
  int count = 0;
  int i = 0, j, ctr;
  int fcounter;
  for(i ; i<(*n) ; i++){
    if(student_array[i]<avg){
      count += 1 ;
    }
    ctr = 1;
        for(j=i+1; j<(*n) ; j++)
        {
            if(student_array[i]==student_array[j])
            {
                ctr++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i] = ctr;
        }
    }
  
  printf("The number of students who scored less than the average are %d\n", count);
  printf("The frequency of all elements of the array is:\n");
  for(i=0 ; i<(*n) ; i++){
    if(freq[i] != 0){
      printf("%d occurs %d times\n", student_array[i], freq[i]);
    }
  }
}
