#include<stdio.h>

int main()
{     int array[5];
      printf("enter number : \n");
      
      for(int i = 0; i< 5 ; i++){
      scanf("%d", &array[i]);
      }
      int sum = 0;
      
      for(int i = 0 ; i<5 ; i++){
      	sum += array[i];
      }
      printf("sum is %d" , sum);
      return 0;
}