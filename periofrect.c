#include<stdio.h>
int main (){
    int a;
    int b;
    printf ("enter length of rec:" );
    scanf("%d",& a);
    printf("enter breadth of rec:");
    //yaha pe & lagana bhool gya mai 
    scanf("%d",&b);
    int perimeter= 2*a + 2*b ;
    printf ("perimeter of rectangle is :%d",perimeter );
    return 0;

}
