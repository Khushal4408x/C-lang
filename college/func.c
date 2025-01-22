#include <stdio.h>
float sum(float k, float l)
{
    float sum_ = k + l;
    return sum_;
}
int main()
{
    float k = 10;
    float l = 20.2;
    float x = sum(k, l);
    printf("%f", x);
}