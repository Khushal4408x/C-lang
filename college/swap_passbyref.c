#include <stdio.h>
int swap(int *a, int *b)
{
    *a = (*a) * (*b);
    *b = (*a) / (*b);
    *a = (*a) / (*b);
}
int main()
{
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("changed a %d\n", a);
    printf("changed b %d", b);
}