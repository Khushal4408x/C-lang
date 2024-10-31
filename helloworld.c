#include<stdio.h>
#include<math.h>// this header is for using power 
int main (){
    int c;
    int b=c=1;
    int power=pow(b,c);
    printf("%d\n",power);
    /*modulo operator gives remainder , eg 12%10 
    will give 2 as output
   modulo operator works only on integers*/
    printf("%d\n",12%10  );
    printf("%d",-8%3);
    /*ARITHEMATIC operation combination
    
2*2=4, 2*2.0=4.0000,2.0*2.0=4.0000*/
    return 0;

}