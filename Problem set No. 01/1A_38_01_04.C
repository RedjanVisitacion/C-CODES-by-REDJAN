#include <stdio.h>
#include <conio.h>

int main(){
    double area,side;
    clrscr();
    
    printf("Enter the side of square: ");
    scanf("%lf",&side);
    
    area = side * side;
    
    printf("\nThe base of square is %.2lf then the height is %.2lf thats why the area is %.2lf\n\n\n",side,side,area);

    getch();
    return 0;
}