#include <stdio.h>

int main() {
int n;
printf ("sum of n natural numbers, give n:");
scanf("%d",&n);
int sum=0;
for (int i = 0; i <=n; i++)
{
    sum=sum+i;
}
printf("%d\n",sum);
for (int i = n; i>= 1 ;i--)
{
 printf("%d\n",i);   /* code */
}
    return 0;
}
