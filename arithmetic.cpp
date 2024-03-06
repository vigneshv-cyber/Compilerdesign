#include <stdio.h>
int main() {
    char op;
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == '+') {
        printf("\n\t+ --> Addition (Valid Input)", op);
    } else if(op == '-') {
        printf("\n\t- --> Subtraction (Valid Input)", op);
    }else if(op == '*') {
        printf("\n\t* --> Multiplication (Valid Input)", op);
    }else if(op == '/') {
        printf("\n\t/ --> Division (Valid Input)", op);
    }
    else{
    	printf("\n\tInvalid Input");
	}
    return 0;
}

