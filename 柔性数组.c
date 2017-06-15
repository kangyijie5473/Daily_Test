/*
 * > File Name: 柔性数组.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月13日 星期二 22时09分47秒
 */

#include <stdio.h>

struct a{
    int b;
    char c[];
};
int main(void)
{
    printf("%lu\n",sizeof(struct a)); //值为4

}

