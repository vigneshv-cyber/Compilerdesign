#include <stdio.h>
int main() {
    char ch;
    int whitespaceCount = 0;
    int newlineCount = 1;

    printf("Enter a string (press ~ to end input):\n");

    while (1) {
        scanf("%c", &ch);

        if (ch == '~') {
            break;  
        }

        if (ch == ' ' || ch == '\t') {
            whitespaceCount++;
        } else if (ch == '\n') {
            newlineCount++;
        }
    }

    printf("Number of whitespaces: %d\n", whitespaceCount);
    printf("Number of newline characters: %d\n", newlineCount);

    return 0;
}
