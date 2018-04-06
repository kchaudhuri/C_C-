#include <stdio.h>
using namespace std;

void func()
{
    printf("in func\n");
}

int main()
{
    printf("in main\n");

    void (*fp)() = func;
    fp();
    (*fp)();
    return 0;
}
