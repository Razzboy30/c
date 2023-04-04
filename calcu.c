#include <math.h>
#include <stdio.h>

int main(){
    printf("hello");

    double num1;
    double num2;
    char oper;
    printf("enter operator:");
    scanf("%c", &oper);
    
    printf("enter first number:");
    scanf("%lf", &num1);
    printf("enter second number:");
    scanf("%lf", &num2);
    // printf("enter operator:");
    // scanf("%c", &oper);
    
    

    printf("%c", oper);
    if(oper == '+'){
        printf("%lf", num1 + num2);
    } else if(oper == '-'){
        printf("%lf", num1 - num2);
    } else if(oper == '/'){
        printf("%lf", num1 + num2);
    } else if(oper == '*'){
        printf("%lf", num1 * num2);
    }else{
        printf("not a valid arg");
    }

    // return 0;

}