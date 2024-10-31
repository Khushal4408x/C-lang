#include<stdio.h>
int main (){
    char alpha;
    printf("enter char");
    scanf("%c",& alpha);
    if (alpha>= 'a'&& alpha<='b' ){
        printf("lower case");
    }
    else if (alpha>='A'&& alpha<='Z'/*char>=65 && char <=90  same hai*/){
        printf ("UPPER CASE");
    }
    else {printf ("not english");};
    return 0;
}