#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getLongest(char *s)
{
    int max = 0;
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
    int max = 0;
    char *longest;
    FILE *fd = fopen("./in","r");
    if(!fd)
    {
        printf("\nCannot open file");
        exit(1);
    }
    while(!feof(fd))
    {
        char buf[1000];
        fgets(buf,1000,fd);
        longest = getLongest(buf);
        printf("\n%s",longest);
        int linemax = strlen(longest);
        printf("\n%d",linemax);
        printf("\n%d",max);
        if(linemax > max)
        {
            max = linemax;
        }
    }

    printf("\nLongest word is: %s\n",longest);
    fclose(fd);
    return 0;
}
