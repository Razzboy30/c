#include <math.h>
#include <stdio.h>

int main(){

    // char name[20];
    // int age;
    // printf("Enter name:");
    // scanf("%s", name);
    // printf("Enter age:");
    // scanf("%d", &age);
    // printf("My name is %s and my age is %d", name, age);

    // int num1;  
    // int num2;  
    // printf("enter first number:");   
    // scanf("%d", &num1);
    // printf("enter second number:");
    // scanf("%d", &num2);

    // printf("%d", num1+num2);
    // double num1;  
    // double num2;  
    // printf("enter first number:");   
    // scanf("%lf", &num1);
    // printf("enter second number:");
    // scanf("%lf", &num2);

    // printf("%f", num1+num2);

    int age = 30;
    char grade ='A';
    int *pAge = &age;
    
    printf("%d", *pAge );
    // printf("%p\n%p",&age, &grade);

}