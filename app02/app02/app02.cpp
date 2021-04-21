
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>


int main() {
    float width, height, g;
    float ball_x, ball_y, ball_vy, radius;
    

    width = 600;
    height = 400;
    g = 0.6;

    initgraph(width, height);

    radius = 10;
    ball_x = width / 4;
    ball_y = height - radius;
    ball_vy = 0;

    while (1)
    {
        
        if (_kbhit())
        {
            char input = _getch();
            if (input == ' ')
            {
                ball_vy = -16;
            }
        }

        ball_vy = ball_vy + g;
        ball_y = ball_y + ball_vy;

        if (ball_y >= height - radius)
        {
            ball_vy = 0;
            ball_y = height - radius;
        }

        clearcliprgn();
        fillcircle(ball_x, ball_y, radius);
        Sleep(10);
    }
    closegraph();
    return 0;
}

/*

int main()
{
    //std::cout << "Hello World!\n";
    /*

    while (1) {
        if (_kbhit())
        {
            char input = _getch();
            std::cout << input << std::endl;
            if (input == ' ')
                std::cout << "按下了空格。。。\n" << std::endl;
            
        }
    }
    

    ball();
    return 0;
}
*/