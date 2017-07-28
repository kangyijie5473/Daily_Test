/*
 * > File Name: testConcurrency.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年07月28日 星期五 09时31分02秒
 */

#include <iostream>
#include <thread>
using namespace std;
int main(void)
{
    cout << std::thread::hardware_concurrency() <<  endl; 
}
