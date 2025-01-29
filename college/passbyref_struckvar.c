#include <stdio.h>
struct book
{
    char name[20];
    int isbn;
} b1;
void display(struct book *p)
{
    scanf("%s", p->name);
    scanf("%d", &p->isbn);
}
void main()
{
    struct book b1;

    display(&b1);
    printf("%s \n%d", b1.name, b1.isbn);
}
