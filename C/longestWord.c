#include <stdio.h>
#include <string.h>

char *getLongest(char *s)
{
    int max=0;
    char *l;
    char *p=strtok(s," ");
    while(p != NULL)
    {
        if(strlen(p)> max)
        {
            max = strlen(p);
            l = p;
        }
        p = strtok(NULL," ");
    }
    return l;
}

int main()
{
    char buf[100];
    fgets(buf,100,stdin);

    printf("\nLongest word is: %s\n",getLongest(buf));
    return 0;
}
