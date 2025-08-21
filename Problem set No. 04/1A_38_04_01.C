#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int main() {
    int year;
    clrscr();

    p("Enter a year: ");
    s("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        p("%d is a leap year.\n", year);
    } else {
        p("%d is not a leap year.\n", year);
    }

    getch();
    return 0;
}