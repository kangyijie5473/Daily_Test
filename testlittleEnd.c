/*
 * > File Name: testlittleEnd.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年05月16日 星期二 20时12分56秒
 *
 * 总结：两种测试大小端的方法
 * 1.对一个int类型用一个 char * 每次移动一个byte
 * 2.对一个union
 *
 */

#include <stdio.h>
union test{
    int a;
    char b;
};
int main(void)
{
    int a = 1;
    char *p = (char *)&a;
    if(*p)
        printf("little endian\n");
    else 
        printf("big endian\n");

    union test tester;
    tester.a = 1;
    if(tester.b == 1)
        printf("little endian\n");
    else
        printf("big endian\n");
}
