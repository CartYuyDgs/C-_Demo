
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    //std::cout << "Hello World!\n";

    while (1) {
        if (_kbhit())
        {
            char input = _getch();
            std::cout << input << std::endl;
            if (input == ' ')
                std::cout << "按下了空格。。。\n" << std::endl;
            
        }
    }

    return 0;
}
