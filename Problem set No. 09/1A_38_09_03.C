#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverseSentence() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    clrscr();
    printf("Enter a sentence: ");
    reverseSentence();
    printf("\n");

    getch();
    return 0;
}