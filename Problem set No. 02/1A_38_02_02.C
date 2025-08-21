/*
               --//Algorithm//--
               
   --//Start//--
step 1: Including necessary preprocessor or header files:
        - include stdio.h, conio.h
step 2: Define input/output p for printf s for scanf.
step 3: Declare main function:
        Initialize local variable int marks[5], maxMarks = 100, totalMarks = 0;
step 4: Clear the console screen using clrscr();
step 5: Start a loop to input marks for each subject:
        - Use a for loop with an index variable i ranging from 0 to 4.
        - Display a message to enter marks for each subject with p("Enter marks for subject %d: ", i + 1);.
        - Read and store the marks for the current subject using s("%d", &marks[i]);.
        - Check if the entered marks are within the valid range (0 to 100).
        - If the marks are not valid, display an error message, and re-enter the marks for the current subject by decrementing i.
        - If the marks are valid, add them to the totalMarks variable.
step 6: Calculate the percentage using the formula:
        - (float)totalMarks / (5 * maxMarks) * 100; to calculate the percentage of marks obtained.
step 7: Display the results:
        - Print the total marks and percentage using p("\nTotal marks: %d\n", totalMarks); and p("Percentage marks obtained: %.2f%%\n", percentage);.
step 8: Return 0 indicate successfull program execution.
   --//End//--
     
*/
#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int main() {
    int marks[5];
    int maxMarks = 100;
    int totalMarks = 0;
    int i;
    float percentage;
    clrscr();

    for (i = 0; i < 5; i++) {
        p("Enter marks for subject %d: ", i + 1);
        s("%d", &marks[i]);
        
        if (marks[i] <= 0 || marks[i] >= 100) {
            p("\nMarks should be between 0 and 100. Please enter a valid mark.\n\n");
            i--;
        } else {
            totalMarks += marks[i];
        }
    }

    percentage = (float)totalMarks / (5 * maxMarks) * 100;
    
    p("\nTotal marks: %d\n", totalMarks);
    p("Percentage marks obtained: %.2f%%\n", percentage);
    
    getch();
    return 0;
}