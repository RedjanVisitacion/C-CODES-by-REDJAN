#include <stdio.h>
#include <conio.h>

int main() {
    double meters, inches;
    clrscr();
    
    printf("Enter the length in meters: ");
    scanf("%lf", &meters);
    
    inches = meters * 39.37;
    
    printf("\n%.2lf meters is equal to %.2lf inches.\n\n\n", meters, inches);
    getch();
    return 0;
}