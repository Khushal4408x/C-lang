// give grades marks <30 C, 30<=marks<70 B , 70<=marks<90 A, 90<=marks <=100 A+
#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100):");
    scanf("%d", &marks);
    if (marks <= 30)
    {
        printf("Grade C");

        /* code */
    }
    if (marks > 30 && marks < 70)
        
    {
        printf("Grade B");
        /* code */
    }
    if (marks >= 70 && marks < 90)
        
    {
        printf("Grade A");
        /* code */
    }
    if (marks > 90 && marks <= 100)

    {
        printf("Grade A+");
        /* code */
    }
   
    return 0;
}