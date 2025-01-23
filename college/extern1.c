#include <stdio.h>
extern int globvar;

void disp()
{
    printf("Ext val %d", globvar);
}