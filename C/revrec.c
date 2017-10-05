#include <stdio.h>

void rdisplay(char *s)
{
    if(*s == '\0')
        return;
    rdisplay(s+1);
    printf("%c",*s);
}
int main()
{
    char a[100];
    printf("\nEnter a string\n");
    fgets(a,100,stdin);
    printf("\n");
    rdisplay(a);
    printf("\n");

    return 0;
}
