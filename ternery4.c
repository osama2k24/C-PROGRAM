#include<stdio.h>
int main(){
    int num;
    printf("enter num");
    scanf("%d",num);
    num%2==0?printf("even"):printf("odd");
    return 0;
}