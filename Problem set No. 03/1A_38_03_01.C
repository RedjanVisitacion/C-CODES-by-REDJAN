#include <stdio.h>
#include <conio.h>

#define cp cprintf
#define g gotoxy
#define t textcolor

int main(){
    clrscr();
    
    textbackground(BLUE);
    t(YELLOW + BLINK); g(27,12); cp("IT112 - Computer Programming 1");
    g(40,85);

    getch();
    return 0;
}