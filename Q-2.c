#include<stdio.h>
int main(){
    char op;
    int num1,num2;
    printf("Enter a first number :");
    scanf("%d",&num1);
    printf("Enter a second number :");
    scanf("%d",&num2);
    printf("Enter an op :");
    scanf(" %c",&op);
    switch(op){
        case '+' : 
            printf("%d\n", num1 + num2);
            break;
        case '-' : 
            printf("%d\n", num1 - num2);
            break;
        case '*' : 
            printf("%d\n", num1 * num2);
            break;
        case '/' : 
            if(num2 == 0){
                printf("Invalid number!\n");
            } else {
                printf("%f\n", (double)num1 / num2);
            }
            break;
        case '%' : 
            if(num2 == 0){
                printf("Invalid number!\n");
            } else {
                printf("%d\n", num1 % num2);
            }
            break;
        default : 
            printf("Invalid value\n");
    }
    return 0;
}