/*
 * > File Name: testSpeedImplicitly-declaredDefaultConstructor.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年11月12日 星期日 22时49分05秒
 */

#include <iostream>
using namespace std;
class Implicit{
    string a;
};
class NotImplicit{
    string b;
    public:
    NotImplicit() {}
};
int main(void)
{
    int i = 100000;
    while(i--){
        Implicit g;//Implicit speed 0.006s ,NotImplicit speed 0.009s
    }              //原因：Implicits是inline
}
