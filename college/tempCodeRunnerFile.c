#include <stdio.h>
int main()
{
    int a = 4;
    extern int a;
    {
        a = 20;
        printf("%d", a);
    }
    printf("%d", a);
}