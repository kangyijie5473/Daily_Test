/*
 * > File Name: 代码块和析构函数.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年07月26日 星期三 09时11分29秒
 */

#include <iostream>
using namespace std;
class A{
    public:
    A(int z){cout << z << endl;}
    ~A(){cout << "des" << endl;}
};
int main(void)
{
    {
        A a(2);
    }
    //输出2 des 说明已经析构
    cout << " return " << endl;
}
