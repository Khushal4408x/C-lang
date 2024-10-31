#include<stdio.h>
int main () {
    printf ("enter 1st number-: ");
    int firstnumber , secondnumber ;
    scanf("%d", & firstnumber );
    printf ("enter 2nd number-:");
     scanf(" %d",& secondnumber);
    int sum = firstnumber+secondnumber;
    printf("sum is %d",sum );
    return 0;
}