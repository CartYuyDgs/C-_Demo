// Project1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "project2.h"

using namespace lisi;

namespace zhangsan //定义一个命名空间
{
    void radis()
    {
        printf("张三的radis\n");
    }
}

namespace lisi
{
    void radis2()
    {
        printf("李四de radis2()\n");
    }
}

struct student
{
    char name[100];
    int number;
};

namespace std
{
    int itest;
    struct student cout1;
}


int main()
{
    //命名空间
    //std::cout << "Hello World!\n";
    //zhangsan::radis();
    //lisi::radis2();
    //lisi::radis();

    //radis();
    //radis2();


    //cin,cout

    //std::cout << "learn C++\n";

    //std::itest = 1;
    //strcpy_s(std::cout1.name, "aaa\n");

    //std::cout << std::cout1.name;
    //std::cout << std::cout1.number;

    //std::cout << "\n------------------------\n";

    /* int x = 3;
    //std::cout << x << "的平方是：" << x * x << "\n";
    std::cout << x << "的平方是：" << x * x << std::endl;
    x++;
    std::cout << x << "的平方是：" << x * x << "\n"; */


    std::cout << "输入两个值：" << std::endl;
    int value1 = 0, value2 = 0;

    std::cin >> value1 >> value2;

    std::cout << value1 << "+" << value2 << "=" << value1+value2
        << std::endl;

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
