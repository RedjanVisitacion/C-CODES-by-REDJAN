#include <stdio.h>
#include <conio.h>

int main (){
    float b,h,area;
    clrscr();
    
    printf("Enter the base of triangle: ");
    scanf("%f",&b);
    
    printf("Enter the height of triangle: ");
    scanf("%f",&h);
    
    area = 2 * b * h;
    
    printf("The area of triangle is %.2f",area);

    getch();
    return 0;
}