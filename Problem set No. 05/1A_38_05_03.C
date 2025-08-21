#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int main() {
    int number,i;
    clrscr();

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);
    clrscr();

    printf("Multiplication table for %d:\n\n", number);

    for (i = 1; i <= 5; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    do {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    } while (i <= 10);

    getch();
    return 0;
}