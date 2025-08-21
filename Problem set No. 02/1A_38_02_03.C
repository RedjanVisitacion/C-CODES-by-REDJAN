/*
                   --//Algorithm//--
      
 \\Start\\
 step 1: Including necessary preprocessor or header files:
         - include stdio.h, conio.h
 step 2: Define Input and data type:
         - define p printf, f float.
 step 3: Declare the main function:
         - Initialize local variables int population = 80000, float percentageMen, percentageLiteracy, percentageLiterateMen.
 step 4: Calculating the illiterate men/women using the formula:
         - men = (percentageMen / 100) * population;
         - literate = (percentageLiteracy / 100) * population;
         - literateMen = (percentageLiterateMen / 100) * population;
         - illiterateMen = men - literateMen;
         - illiterateWomen = literateMen;
 step 5: Clear the console screen using clrscr();        
 step 6: Display the result:
         - Total number of illiterate men: %.0f
         - Total number of illiterate women: %.0f
 step 7: Return 0 indicate successful program execution.        
\\End\\


*/
#include <stdio.h>
#include <conio.h>

#define p printf
#define f float

int main() {
    int population = 80000;
    f percentageMen = 52;
    f percentageLiteracy = 48;
    f percentageLiterateMen = 35;

    f men = (percentageMen / 100) * population;
    f literate = (percentageLiteracy / 100) * population;

    f literateMen = (percentageLiterateMen / 100) * population;

    f illiterateMen = men - literateMen;
    f illiterateWomen = literateMen;
    clrscr();

    p("Total number of illiterate men: %.0f\n", illiterateMen);
    p("Total number of illiterate women: %.0f\n", illiterateWomen);

    getch();
    return 0;
}