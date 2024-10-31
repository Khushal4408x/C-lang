#include <stdio.h>
int main(){
    int a ;int b; int c;int d;
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter second num:");
    scanf("%d",& b);
    printf("enter 3rd num:");
    scanf("%d",& c);
    d=(a+b+c)/3;
    printf("average of given 3 numbers %d",d);
    return 0;
    }