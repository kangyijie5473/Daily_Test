#include <iostream>
using namespace std;
typedef char *CharPoint;
int main()
{
    const CharPoint c = NULL;
    //此时 c的类型为 char * const 而不是const char *
    //这样使用typedef很容易产生理解的偏差
}

