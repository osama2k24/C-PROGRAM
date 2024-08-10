#include<stdio.h>
int main(){
   int num;
   printf("enter a number : ");
   scanf("%d",num);
   if (num>=0){
      printf("The number is positive\n");
   }  
    else{
      printf("The number is nigative\n");
   }
   
   if(num%2==0){
      printf("Also the number is even\n");
   }
   else{
      printf("Also the number is odd\n");
   }
      return 0;
}