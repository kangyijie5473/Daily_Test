/*
 * > File Name: testSignal.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年10月23日 星期一 17时04分19秒
 */

#include <iostream>
#include <cstdio>
#include <csignal>
using namespace std;
class Test{
public:
    void func1(int a){printf("1\n");}
    static void func3(int a){}
private:
    static void func4(int a){}
    void func2(int a){printf("2\n");}
};
int main()
{
    class Test i;
 // signal(SIGINT, i.func1);
 // signal(SIGINT, i.func2);
    signal(SIGINT, Test::func3);// 这里的函数指针只能是类内static成员函数
 // signal(SIGINT, Test::func4);
}
