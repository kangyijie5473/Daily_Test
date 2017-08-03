/*
 * > File Name: testThis.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年08月02日 星期三 17时51分33秒
 */

#include <iostream>
using namespace std;
class A{
    public:
    A():id(3) {};
    A &func()
    {
        return *this;
    }
    A &funb()
    {
        id++;
        return *this;
    }
    void print()
    {
        cout << id << endl;
    }
    int id;
};
int main(void)
{
    A ins;
    ins.func().funb().print();
    ins.print();

}
