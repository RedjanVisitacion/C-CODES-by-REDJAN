#include <stdio.h>
#include <conio.h>

#define PI 3.14159
#define p printf
#define s scanf
#define d double

d calculateCircleArea(double radius) {
    return PI * radius * radius;
}

int main() {
    d radius, area;
    clrscr();

    p("Enter the radius of the circle: ");
    s("%lf", &radius);

    area = calculateCircleArea(radius);

    p("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    getch();
    return 0;
}