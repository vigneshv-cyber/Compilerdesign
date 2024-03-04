%{
#include<stdio.h>
int n=0;
%}
%%
"/*"[a-zA-Z0-9\n\t]+"*/" {n++;}
"//"[a-zA-Z0-9\n\t]+"//" {n++;}
%%
int yywrap()
{}
int main()
{
printf("Enter --> ");
yyin=fopen("simple.txt","r");
yylex();
printf("no of comment lines: %d",n);
}