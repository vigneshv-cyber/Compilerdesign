%{ 
int vcount = 0; 
int ccount = 0; 
%} 

%% 
[aeiouAEIOU] { vcount++; } 
[a-z,A-Z] { ccount++; } 
%% 

int yywrap() { 
    return 1; 
} 

int main() { 
    printf("Enter the string with vowels and consonants: "); 
    yylex(); 
    printf("\nNumber of vowels: %d\n", vcount); 
    printf("Number of consonants: %d\n", ccount); 
    return 0; 
}
