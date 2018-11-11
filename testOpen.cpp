//
// Created by kang on 18-11-11.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
using namespace std;
int main()
{

    int fd1 = open("testExit.c", O_RDONLY, 0);
    close(fd1);
    int fd2 = open("huhu.c", O_RDONLY, 0);
    printf("fd2 --> %d", fd2);//fd2 为3 因为fd1为3 后来被close了，于是分给当前最小的就是3
    exit(0);
}
