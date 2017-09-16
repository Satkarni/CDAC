#include <stdio.h>
#include <stdlib.h>
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
    int max;
    char buf[100];
        char *longest;
    FILE *fd = fopen("./in","r");
    if(!fd)
    {
        printf("\nCannot open file");
        exit(1);
    }
    while(fd != EOF)
    {
        fgets(buf,100,stdin);
        if(strlen(getLongest(buf)) > max)
        {
            max = strlen(getLongestbuf(buf));
            longest = getLongest(buf);
        }
        
    }

    printf("\nLongest word is: %s\n",longest);
    return 0;
}
