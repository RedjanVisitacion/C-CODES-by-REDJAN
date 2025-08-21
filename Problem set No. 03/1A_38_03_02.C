#include <stdio.h>
#include <conio.h>

int main() {
    double totSellPrice, totProf, cPricePerItem;
    clrscr();

    printf("Enter the total selling price of 15 items: ");
    scanf("%lf", &totSellPrice);

    printf("Enter the total profit earned on 15 items: ");
    scanf("%lf", &totProf);

    cPricePerItem = (totSellPrice - totProf) / 15.0;
    
    printf("Cost price of one item is: %.2lf\n",cPricePerItem);
    
    getch();
    return 0;
}