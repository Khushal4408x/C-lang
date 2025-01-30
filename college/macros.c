#include <stdio.h>
#define s(x, y)                 \
    {                           \
        int result = (x) + (y); \
        printf("%d\n", result); \
    }

int main()
{
    s(4, 5);
    return 0;
}