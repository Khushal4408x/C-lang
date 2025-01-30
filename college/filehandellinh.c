#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("filehand.txt", "r");
    char ch;
    while ((ch = fgetc(ptr)) != EOF)
    {
        putchar(ch);
    }
    fclose(ptr);
}