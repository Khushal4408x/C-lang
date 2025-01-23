#include <stdio.h>
static int i = 10;
void test();
int main()
{

    test();
    test();
    test();
    return 0;
}
void test()
{
    i++;
    printf("%d\n", i);
}
