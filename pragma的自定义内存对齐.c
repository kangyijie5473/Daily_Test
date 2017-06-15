/*
 * > File Name: pragam的自定义内存对齐.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月15日 星期四 22时34分24秒
 */

#include <stdio.h>
#pragma pack(2)
struct a{
    char cc;
    int dd;
};
#pragma pack()
struct b{
    char ee;
    int ff;
};
#pragma pack(1)
struct c{
    char gg;
    int hh;
};

int main(void)
{
    printf("%lu,%lu,%lu\n",sizeof(struct a), sizeof(struct b), sizeof(struct c));
    //      6    8   5
    //      以2对齐  默认对齐 以1对齐
}
