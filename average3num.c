#include<stdio.h>
int main() {
    float num1, num2, num3, average;
    printf("Enter numbers: ");
    scanf("%f",&num1);
    printf("Enter numbers: ");
    scanf("%f",&num2);
    printf("Enter numbers: ");
    scanf("%f",&num3);
    average=(num1+num2+num3)/3;
    printf("%f",average);
    return 0;
}