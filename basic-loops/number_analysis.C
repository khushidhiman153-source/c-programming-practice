#include<stdio.h>

int main()
{   int n ;
    printf("enter a number : ");
    scanf("%d" , &n);
    
    int num = n ;
    int rem ,count= 0;
    if(num == 0){
    	count = 1 ;
    }  
    else {
    while(num > 0){
         rem = num % 10;
         num = num/10;
    	 count++;
    } 
    }
    printf("number of digits are %d\n" , count);
    
   int digit = n ;
   int sum = 0; 
   do {
   	rem = digit % 10 ;
   	sum = sum + rem ;
   	digit = digit /10 ;
   } 
   while(digit>0);
    printf("sum of digits are %d\n" , sum);
  
    int num2 = n ;
    int rev = 0;
    while(num2 >0){
        rem = num2 % 10 ;
        rev = rev*10 + rem ;
        num2 = num2 /10 ;
    }
    printf("reverse is %d\n" , rev);
    
    if(rev == n){
        printf("palindrome number");
    }
    else {
        printf("not a palindrome ");
    }
        return 0;
}