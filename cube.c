#include<stdio.h>
int main(){
    int a;
    printf("tell me a number which is to be cubed:");
    scanf("%d",&a);
    int cube= a*a*a;
    printf("cube of given number:%d",cube);
    return 0;
}