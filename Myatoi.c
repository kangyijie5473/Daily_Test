/*
 * > File Name: Myatoi.c
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年06月16日 星期五 08时22分15秒
 *
 * 对atoi的实现
 * 注意点：
 * 1.数据范围（int -2147483648～2147483647）
 * 2.字符串是否为NULL
 * 3.字符串长度（比如int最多11位）
 * 4.非法字符
 */


#include <stdio.h>
#include <string.h>
int Myatoi(const char *str)
{
    int length = strlen(str);
    const char *p = &str[length - 1];
    int flag = 1,key = 1, sum = 0;
    const char *start = str;
    long int test = 0;

    if(str == NULL){                      //空字符串检测
        puts("ERROR: The str is NULL");
        return -1;
    }

    if(*str == '-'){ 
        flag = -1;
        start++;
    }

    if(length > 10 && flag != -1){        //字符串长度检测
        puts("ERROR: The str is too long");
        return -1;
    }


    while(p != start - 1 && *p >= '0' && *p <= '9'){ //判断非法字符
        sum += (*p - '0')*key;
        test += (*p - '0')*key; // test为了判断是否超过int的范围
        key *= 10;
        p--;
    }

    if(p != start - 1){
        puts("ERROR: str contain ERROR charactor");
        return -1;
    }

    if(test*flag != sum*flag){  //test如果和sum不一致说明超过了
        puts("ERROR: the number is too large(int just only -2147483648~2147483647)");
        return -1;
    }
    return sum*flag;
}
int main(void)
{
    char *str = "-21483649";
    printf("%d\n", Myatoi(str));
}
