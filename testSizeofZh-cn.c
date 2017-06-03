/*
 * > File Name: testSizeofZh-cn.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年05月30日 星期二 22时23分06秒
 */

#include <stdio.h>
int main(void)
{
    char a[2];
    printf("%d\n",sizeof("程康")); // Linux 上测试为 7 
    printf("%d\n",sizeof("康"));   // 同上           4
    /*
    * 原因：
    * Linux默认为UTF-8 而大部分中文在UTF-8编码下为3字节
    * 上课总说的中文2字节一般指GB2312--Windows下
    *
    */
}
