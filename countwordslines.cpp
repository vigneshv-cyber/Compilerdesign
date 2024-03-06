#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];

    char ch;
    int characters, words, lines,i;

    printf("Enter the text:\n");
    fgets(input, 100, stdin);

    characters = words = lines = 0;
    for (i = 0; i < strlen(input); i++)
    {
        characters++;

        if (input[i] == '\n' || input[i] == '\0')
            lines++;

        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n' || input[i] == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    return 0;
}
