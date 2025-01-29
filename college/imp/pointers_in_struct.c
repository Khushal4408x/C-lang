#include <stdio.h>
struct teacher
{
    char name[10];
    int empid;
    float salary;
} t1, *t2;
int main()
{
    t1 = (struct teacher){"Sarika", 1, 250000.0};
    t2 = &t1;
    printf(
        "%s  %d  %f", t2->name, t2->empid, t2->salary);
    return 0;
}
