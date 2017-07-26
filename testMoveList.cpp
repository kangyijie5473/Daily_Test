#include<list>
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
    string a("str");
    vector<string> b;
    b.push_back(std::move(a));
    cout << a << endl; // 似乎move完a析构了
    int aa = 3;
    vector<int> bb;
    bb.push_back(std::move(aa));
    cout << aa << endl; //aa没有析构函数 值不变
    aa++;
    for(auto i : bb)
        cout << i << endl;//对于基本的aa直接拷贝
    
}
