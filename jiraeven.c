#include<stdio.h>
int main(){
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    num%2==0?printf("num is even"):printf("num is odd");
    return 0;
}