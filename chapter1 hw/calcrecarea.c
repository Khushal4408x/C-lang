#include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("enter length:");
    scanf("%d",& length);
    printf("enter the breadth:");
    scanf("%d",& breadth);
    int area;
    area=(length*breadth);
    printf ("area of the rectangle %d",area);
    return 0;

}