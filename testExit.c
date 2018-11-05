#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    printf("hello world\n");
    printf("write to buffer");
    exit(1)     //print all string
    //_exit(1);   not print "write to buffer" 
}
