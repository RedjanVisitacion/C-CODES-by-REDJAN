#include <stdio.h>
#include <conio.h>

int main(){
    int ASCII = 0;
    clrscr();

    while( ASCII <= 255 ){
        printf("ASCII: %d ASCII character value: %c\n",ASCII,ASCII);
        ASCII++;
    }

    getch();
    return 0;
}