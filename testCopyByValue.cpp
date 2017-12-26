/*
 * @filename:    testCopy.cpp
 * @author:      Jack Kang
 * @date:        2017年12月26日 22:50:41
 * @description:
 */

#include<iostream>
using namespace std;
class A{
    public:
        A() = default;
        A(const A &a): str(a.str){ cout << "copy" << endl; }
        A(const string &d):str(d){ cout << "str" << endl; }
        string str;
};
void func(A a)
{
    cout << a.str << endl;
}
int main()
{
    string d = "hello";
    A a(d);
    func(string("asdf"));
}
