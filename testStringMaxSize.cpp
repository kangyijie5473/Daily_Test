/*
 * > File Name: testStringMaxSize.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年08月03日 星期四 08时15分51秒
 */

#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a;
    cout << a.max_size() << endl;
    // 结果为9223372036854775807
}
