/*
 * > File Name: testHgYi.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年10月27日 星期五 14时49分58秒
 */

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int fun(char *a)
{
    return 2;
}
int fun(const char *a) //若两种都有，则能重载，若只有const 参数版本，则按照C风格可以传非const参数
{
    return 1;
}

class A{
    // 即按照调用对象是否为const重载
    const char &operator[](int b) const
    {
        return test[b];
    }
    char &operator[](string t)  
    {
        int a =2;
        return test[a];
    }
    string test;
};
int main(int argc, char **argv)
{
}
