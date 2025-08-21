#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char input[100];
    int length, i;
    clrscr();

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    length = strlen(input) - 1; 

    printf("Length of the string: %d\n", length);

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    getch();
    return 0;
}