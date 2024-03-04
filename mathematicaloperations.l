%{ 
#include<stdio.h> 
float op1 = 6, op2 = 7; 
%} 
 
%% 
"+" { printf("Sum = %f\n", op1 + op2); } 
"-" { printf("Difference = %f\n", op1 - op2); } 
"*" { printf("Multiplication = %f\n", op1 * op2); } 
"/" { 
    if (op2 != 0) 
        printf("Division = %f\n", op1 / op2); 
    else 
        printf("Cannot divide by zero\n"); 
} 
. { printf("Enter a proper operator.\n"); } 
%% 
 
int yywrap() { return 1; } 

int main() { 
    printf("Enter number 1: "); 
    scanf("%f", &op1); 
    
    printf("Enter number 2: "); 
    scanf("%f", &op2); 
    
    printf("Enter the operator (+, -, *, /): "); 
    yylex(); 
    return 0; 
}

