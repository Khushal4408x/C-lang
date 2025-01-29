#include <stdio.h>
struct student
{
    char name[10];
    int Rolno;
    float fees;
} s1, s2, s3;
void main()
{
    scanf("%s", s1.name);
    scanf("%d", &s1.Rolno);
    scanf("%f", &s1.fees);
    printf("%s\n", s1.name);
    printf("%d\n", s1.Rolno);
    printf("%f\n", s1.fees);
    s2 = (struct student){"Yug", 53, 10000.00};
    printf("%s %d %f ", s2.name, s2.Rolno, s2.fees);
}