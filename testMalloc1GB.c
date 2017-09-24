/*
 * > File Name: 1.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年09月24日 星期日 13时54分11秒
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /*
    int a[10];
    for (int i = 0; i < 10; ++i){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10 - i - 1; j++){
            if(a[j] < a[j+1]){
                a[j] = a[j]+a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d ",a[i]);
    }
    */
    char *a = (char *)malloc(1000000000);
    if (!a)
        printf("error");
}
