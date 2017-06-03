/*
 * > File Name: testSort.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月02日 星期五 19时47分51秒
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<string> a;
    a.push_back(string("我爱学习"));  
    a.push_back(string("你也爱学习"));
    a.push_back(string("对吧"));
    a.push_back(string("信息"));//肯定不能按照中文排序呀 @祎頔，难道C-Free可以？
    for(auto const &i : a)
        cout << i << endl;
    cout << endl;
    sort(a.begin(),a.end());
    for(auto const &i : a)
        cout << i << endl;
    /*
     * 总结：vector 默认无序
     *       sort()按照英文字典序
     */


}
