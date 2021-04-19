#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int y = 100;
    //int step = 50;
    float vy = 0;
    float g = 5;

    initgraph(600, 800);

    while (1) {
        cleardevice();
        vy = vy + g;
        y = y + vy;
        if (y >= 700) {
            vy = -vy*0.95;
        }
        if (y > 700) {
            y = 700;
        }
        fillcircle(300, y, 10);
        if (y >=800 ) {
            y = 100;
        }
        Sleep(100);
    }
    _getch();
    closegraph();
    return 0;
}


