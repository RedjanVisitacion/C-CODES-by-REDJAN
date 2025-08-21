#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int main() {
    int hardn;
    float carb_cont;
    int tens_str;
    int grade;
    clrscr();

    p("Enter the hardness of steel: ");
    s("%d", &hardn);
    p("Enter the carbon content of steel: ");
    s("%f", &carb_cont);
    p("Enter the tensile strength of steel: ");
    s("%d", &tens_str);


    if (hardn > 50 && carb_cont < 0.7 && tens_str > 5600) {
        grade = 10;
    } else if (hardn > 50 && carb_cont < 0.7) {
        grade = 9;
    } else if (carb_cont < 0.7 && tens_str > 5600) {
        grade = 8;
    } else if (hardn > 50 && tens_str > 5600) {
        grade = 7;
    } else if (hardn > 50 || carb_cont < 0.7 || tens_str > 5600) {
        grade = 6;
    } else {
      grade = 5;
    }  

    p("The Grade of Steel is: %d\n", grade);
    
    getch();
    return 0;
}