%{
#include <stdio.h>
%}

%%
if|else|while|int|switch|for|char { printf("\n%s is a KEYWORD", yytext);}
[a-zA-Z][a-zA-Z0-9]* { printf("\n%s is IDENTIFIER", yytext);}
.|\n { /* Ignore all other characters */ }
%%

int main()
{
    yylex();
    return 0;
}

int yywrap() {
    return 1; // Indicate that there is no more input
}