/*
 * > File Name: 1.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年08月06日 星期日 20时43分16秒
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
int main(void)
{
    pid_t pid = fork();
    if(!pid){
        while(1){
        printf("hello\n");
        sleep(1);
        }
    }else{
        sleep(5);
        if(kill(pid, SIGSTOP) == 0)
            printf("sigstop success\n");
        else
            printf("sigstop fail\n");
        sleep(20);
        if(kill(pid,SIGCONT) == 0){
            printf("SIGCONT success\n");
        }else
            printf("SIGCONT fail\n");
        sleep(3);
        kill(pid, SIGKILL);
        
    }

}
