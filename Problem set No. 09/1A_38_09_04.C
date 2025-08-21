#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    clrscr();

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    
    strcpy(destination, source);

    printf("Original string: %s", source);
    printf("Copied string: %s", destination);

    getch();
    return 0;
}