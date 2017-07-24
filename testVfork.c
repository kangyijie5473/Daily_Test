/*
 * > File Name: testVfork.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年07月24日 星期一 15时15分09秒
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int global = 5;
int main(void)
{
    int i ;
    int var = 5;
    pid_t p;
    p = vfork();
    switch(p){
        case 0:
         i = 3;
        while(i--){
            global++;
            var++;
        }
        printf("child---%d---%d\n",global,var);
        exit(0); // Linux C 上这句为break 子进程错误的直接退出而没有exit导致未知的结果
        case -1:
            break;
        default:
        i = 5;
        while(i--){
            global++;
            var++;
        }
        printf("father---%d---%d\n",global,var);

    }

}
