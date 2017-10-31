/*
 * > File Name: testCPPInitialize.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年10月31日 星期二 16时56分31秒
 */

#include <iostream>
using namespace std;
class A
{
    public:
    A(int a){
        this->a = a; // 和Java一样，也可以这样用，但是感觉会有效率问题。
    }
    int a;
};
int main()
{
    A b(2);
}
