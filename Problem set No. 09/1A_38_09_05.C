#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void removeNonAlphabetCharacters(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char input[100];
    clrscr();

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    removeNonAlphabetCharacters(input);

    printf("String with only alphabetic characters: %s\n", input);
    
    getch();
    return 0;
}