/*
                    --//Algorithm//--
 \\Start\\       
 step 1: Including necessary preprocessor or header file:
         - include stdio.h, conio.h.
 step 2: Define input, output and data type:
         - define p printf, s scanf, d double.
 step 3: Declare the main function:
         - Initialize local variables: double distanceInKm.
 step 4: Clear the console screen using clrscr();
 step 5: Display the prompt to the user: "Enter the distance between two cities in kilometers".
         - Read the users input and store it in variable distanceInKm using scanf.
 step 6: Calculating the  distance between two cities in kilometers using the formula:
         - distanceInMeters = distanceInKm * 1000;
         - distanceInFeet = distanceInKm * 3280.84;
         - distanceInInches = distanceInKm  * 39370.1;
         - distanceInCentimeters = distanceInKm * 100000; 
 step 7: Display the result: 
         - The distance in meters: %.2lf meters
         - The distance in feet: %.2lf feet
         - The distance in inches: %.2lf inches
         - The distance in centimeters: %.2lf centimeters                       
 step 8: Return 0 to indicate successful program execution.
 \\End\\

*/
#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf
#define d double

int main() {
    d distanceInKm,distanceInMeters,distanceInFeet,distanceInInches,distanceInCentimeters;
    clrscr();

    p("Enter the distance between two cities in kilometers: ");
    s("%lf", &distanceInKm);

    distanceInMeters = distanceInKm * 1000;
    distanceInFeet = distanceInKm * 3280.84;
    distanceInInches = distanceInKm  * 39370.1;
    distanceInCentimeters = distanceInKm * 100000;

    p("\nThe distance in meters: %.2lf meters\n", distanceInMeters);
    p("The distance in feet: %.2lf feet\n", distanceInFeet);
    p("The distance in inches: %.2lf inches\n", distanceInInches);
    p("The distance in centimeters: %.2lf centimeters\n", distanceInCentimeters);
    
    getch();
    return 0;
}