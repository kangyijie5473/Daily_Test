#include<list>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
class Myclass{
    public:
    Myclass(int k ): i(k) {};
    ~Myclass(){cout << "des" << endl;}
    int i;
};
int main(void)
{
    string a("str");
    vector<string> b;
    b.push_back(std::move(a));
    cout << a << endl; // 似乎move完a析构了

    int aa = 3;
    vector<int> bb;
    bb.push_back(std::move(aa));
    cout << aa << endl; //
    aa++;
    for(auto i : bb)
        cout << i << endl;//对于基本的aa直接拷贝
    
    Myclass aaa(2);
    vector<Myclass> bbb;
    bbb.push_back(std::move(aaa));
    cout << aaa.i << endl;
}
