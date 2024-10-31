#include <stdio.h>

int main() {
    int a;
printf("enter the number till which numbers are to be printed:\n");
scanf("%d",&a);
/*for (int i = 0; i <= a; i++)
{
    printf ("%d\n",i);
}*/
int i=0;
while (i<=a)
{printf("%d\n",i);
i=i+1;
    /* code */
}



    return 0;
}
