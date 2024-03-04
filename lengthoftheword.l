%{
int counter = 0;
%}

%%
[a-zA-Z]+ {
    if (yyleng > counter) {
        counter = yyleng;
    }
}
%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    printf("Longest word length: %d\n", counter);
    return 0;
}
