#include <stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("adult");
        printf("you can drive\n");
        printf("you can vote");
    }
    else if (age>=13&& age<18){
        printf ("teenager");
    }
    else printf ("child");
    printf ("thanq");
    return 0;
}
