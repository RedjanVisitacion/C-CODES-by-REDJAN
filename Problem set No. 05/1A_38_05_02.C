#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int main() {
    int number;
    char choice;
    clrscr();

    do {
        p("Enter a number: ");
        s("%d", &number);

        if (number > 0) {
            p("\nNumber %d is POSITIVE number\n", number);
        } else if (number < 0) {
            p("\nNumber %d is NEGATIVE number\n", number);
        } else {
            p("\nYou entered Zero\n");
        }
        
        p("\nDo you want to check another number? ([y] for Yes, [n] for No): ");
        s(" %s", &choice);
        
        if (choice == 'y' || choice == 'Y') {
            clrscr();
        } else if (choice != 'n' && choice != 'N') {
            p("\nInvalid input\n\n");
            
        }

    } while (choice != 'n' && choice != 'N');
    
    p("\nExiting the program..\n");

    getch();
    return 0;
}