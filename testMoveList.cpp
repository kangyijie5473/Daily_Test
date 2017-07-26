#include<list>
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
    string a("str");
    vector<string> b;
    b.push_back(std::move(a));
    cout << a << endl; // 似乎move完a为空了
    
}
