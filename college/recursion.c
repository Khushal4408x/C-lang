#include <stdio.h>
int sumrecursive(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return sumrecursive(a - 1) + a;
    }
}
int main()
{
    int a = 5;
    int sum = sumrecursive(a);
    printf("Sum by recursive :%d ", sum);
}
