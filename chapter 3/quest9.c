//fail or pass "passing marks 30"   NON COMMENTED PORTION IS TERNARY PART
#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks(0-100)");
    scanf("%d",&marks);
//     if (marks>=30 &&marks<=100)
//     {printf("candidate is passed \n");
//         /* code */
//     }
//     else if (marks<=30)
//    { printf("candidate has failed \n");}
//    else printf ("you have entered wrong marks");
marks<=30&& marks>=100? printf("fail"):printf("pass");

    return 0;
}