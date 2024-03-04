%{
%}
%%
[0-9][0-9]/[0-1][0-9]/[1-2][0-9]{3} { printf("Valid");}
.+ { printf("Invalid");}
%%

int yywrap(){}

int main()
{
printf("Enter DOB--> ");
yylex();
}