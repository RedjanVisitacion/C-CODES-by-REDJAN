#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf
#define d double

double convertKilometersToMeters(double kilometers) {
    return kilometers * 1000;
}

int main() {
    d kilometers, meters;
    clrscr();

    p("Enter the measure in kilometers: ");
    s("%lf", &kilometers);

    meters = convertKilometersToMeters(kilometers);

    p("%.2lf kilometers is equal to %.2lf meters.\n", kilometers, meters);

    getch();
    return 0;
}