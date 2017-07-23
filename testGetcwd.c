/*
 * > File Name: testGetcwd.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年07月23日 星期日 12时45分08秒
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    char *a = 1;              // 初始化指针，为了看值，会有warning
    char b[100];
    a = getcwd(b, 50);       //用法1:@buf传非空指针，@size记录@buf的最大长度（自己定义的），正确返回@buf
    printf("%p----%s\n%p----%s\n",a,a,b,b);
    
    a = getcwd(NULL,0);      //用法2:@buf传空，@size为0，从堆上分配恰好长度的内存（路径长度），返回指针，需要手动free
    printf("%p----%s\n",a,a);//a的值变了
    free(a);

    a = getcwd(NULL,20);     //用法3:@buf传空，@size不为空，从堆上分配size长度的内存,不够用来存路径，就返回NULL，需要手动free
    printf("%p----%s\n",a,a);
    free(a);
    
    
}
