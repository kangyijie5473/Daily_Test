/*
 * > File Name: 1.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月11日 星期日 11时22分34秒
 */

#include <stdio.h>
int main(void)
{
    char c = '111111111111110';
    char d = '111111111111111';
    printf("c:%d d:%d",c,d); // c:48 d:49 就是对应的'0'&'1'所以结果要看最后一位
}
