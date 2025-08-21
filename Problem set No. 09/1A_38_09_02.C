#include <stdio.h>
#include <conio.h>

int main() {
    char input[100];
    char target;
    int frequency = 0, i;
    clrscr();

    printf("Enter a string: ");
    scanf("%[^\n]s", input);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &target);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == target) {
            frequency++;
        }
    }

    printf("Frequency of '%c' in the string: %d\n", target, frequency);

    getch();
    return 0;
}