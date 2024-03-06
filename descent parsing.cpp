#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char input[100];
int i = 0; // Initialize i to 0

// Define functions for each non-terminal symbol
bool F();
bool T();
bool E();
bool TP();
bool EP();

// Function for non-terminal F
bool F() {
    if (input[i] == '(') {
        i++;
        if (E()) {
            if (input[i] == ')') {
                i++;
                return true;
            } else
                return false;
        } else
            return false;
    } else if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
        i++;
        return true;
    } else
        return false;
}

// Function for non-terminal TP
bool TP() {
    if (input[i] == '*') {
        i++;
        if (F()) {
            if (TP())
                return true;
            else
                return false;
        } else
            return false;
    } else
        return true;
}

// Function for non-terminal T
bool T() {
    if (F()) {
        if (TP())
            return true;
        else
            return false;
    } else
        return false;
}

// Function for non-terminal EP
bool EP() {
    if (input[i] == '+') {
        i++;
        if (T()) {
            if (EP())
                return true;
            else
                return false;
        } else
            return false;
    } else
        return true;
}

// Function for non-terminal E
bool E() {
    if (T()) {
        if (EP())
            return true;
        else
            return false;
    } else
        return false;
}

int main() {
    printf("\nRecursive descent parsing for the following grammar\n");
    printf("\nE->TE'\nE'->+TE'/@\nT->FT'\nT'->*FT'/@\nF->(E)/ID\n");
    printf("\nEnter the string to be checked:");
    fgets(input, sizeof(input), stdin); 

    if (strlen(input) == 0 || (strlen(input) == 1 && input[0] == '\n')) { // Check for empty string
        printf("\nEmpty string!");
    } else {
        if (E() && input[i] == '\0')
            printf("\nString is accepted");
        else
            printf("\nString is not accepted");
    }

    return 0;
}

