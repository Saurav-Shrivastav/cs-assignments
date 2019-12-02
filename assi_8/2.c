#include "prog1.h"
#include <stdio.h>
int student_array[100];
int main(){
  int n;
  int odd_array[50];
  int even_array[50];
  int odd_even[100];
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
        odd_array[i] = -1;
        even_array[i] = -1;
    }
  for(i=0 ; i<n ; i++){
    if(((student_array[i])%2) != 0){
      int j;
      for(j=0 ; j<n ; j++){
        if(odd_array[i]==-1){
          odd_array[j] = student_array[i];
          break;
        }
      }
    }
    if(((student_array[i])%2) == 0){
      int j;
      for(j=0 ; j<n ; j++){
        if(even_array[i]==-1){
          even_array[j] = student_array[i];
          break;
        }
      }
    }
  }
  i = 0;

  while(odd_array[i] != 0 || odd_array[i] != -1){
    odd_even[i] = odd_array[i];
    i++;
  }
  int j;
  while(even_array[j] != 0 || even_array[j] != -1){
    odd_even[i] = even_array[j];
    j++;
    i++;
  }
  printf("The odd marks are: \n");
  i = 0;
  while(odd_array[i] != 0 || odd_array[i] != -1){
    printf("%d  ", odd_array[i] );
    i++;
  }
  printf("marks stored in even array array are : \n");
  i = 0;
  while(even_array[i] != 0 || even_array[i] != -1){
    printf("%d  ", even_array[i] );
    i++;
  }
  i = 0;
  while(odd_even[i] != 0 || odd_even[i] != -1){
    printf("%d  ", odd_even[i] );
    i++;
  }
}
