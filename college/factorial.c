#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int prod = 1;
    printf("Enter the num: ");
    scanf("%d", &n);
    while (n >= i)
    {
        prod = prod * i;
        i++;
    }
    printf("the factorial is= %d", prod);
    return 0;
}