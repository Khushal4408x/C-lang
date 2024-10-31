#include <stdio.h>
int main()
{
    char day;
    printf("enter day(1-7)");
    scanf("%s", &day);
    switch (day)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("wednesday \n");
        break;
    case 'T':
        printf("thursday \n");
        break;
    case 'F':
        printf("Friday \n");
        break;
    case 'S':
        printf("Saturday \n");
        break;
    case 's':
        printf("Sunday \n");
        break;
    default:
        printf("not a valid day \n");
    }
    return 0;
}