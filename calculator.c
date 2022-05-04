#include<stdio.h>
int main(){
    char operator;
    int n1,n2;
    printf("Enter operator: ");
    scanf("%c",&operator);
    printf("Enter first number :");
    scanf("%d \n",&n1);
    printf("Enter second number :");
    scanf("%d \n",&n2);
    switch (operator)
    {
    case '+':
        printf("Sum of %d and %d is %d",n1,n2,n1+n2);
        break;
    case'-':
        printf("Subtraction  of %d and %d is %d",n1,n2,n1-n2);
        break;
    case'*':
        printf("Multiplication of %d and %d is %d",n1,n2,n1*n2);
        break;
    case'%':
        printf("Modulo Division of %d and %d is %d",n1,n2,n1%n2);
        break;
    case'/':
        printf("Division of %d and %d is %d",n1,n2,n1/n2);
        break;
    
    default:
        printf("You enterd invalid operator");
        
    }

    
    return 0;



}