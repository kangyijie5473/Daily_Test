/*
 * > File Name: 求二进制中1的个数.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月15日 星期四 23时12分09秒
 */

#include <stdio.h>
int main(void)
{
    int n ;
    scanf("%d",&n);
    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }
    printf("%d\n",count);
}
