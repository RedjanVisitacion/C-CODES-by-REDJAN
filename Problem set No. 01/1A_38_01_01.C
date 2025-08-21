#include <stdio.h>
#include <conio.h>

int main (){
    char fn[100],mn[100],ln[100];
    clrscr();
    
    printf("Enter your first name: ");
    scanf("%s",&fn);
    
    printf("Enter your middle name: ");
    scanf("%s",&mn);
    
    printf("Enter your last name: ");
    scanf("%s",&ln);
    
    printf("Your full name is:\n%s %s %s\n\n ",fn,mn,ln);


    getch();
    return 0;
}