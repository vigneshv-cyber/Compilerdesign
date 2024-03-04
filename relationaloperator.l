%{
#include <stdio.h>
%}

WORD        [a-zA-Z]+
RELOP       (">="|"<="|"=="|"!="|">"|"<")

%%

{WORD}      { printf("Word: %s\n", yytext); }
{RELOP}     { printf("Relational Operator: %s\n", yytext); }
[\n\t ]    ; // Ignore whitespace characters
.           ; // Ignore other characters

%%
int yywrap() {
    return 1;	
}

int main() {
    printf("Enter a statement:\n");
    yylex();
    return 0;
}