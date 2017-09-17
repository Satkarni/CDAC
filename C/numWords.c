#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numWords(char *s)
{
    int len = 0;
    char *p=strtok(s," ");
    while(p != NULL)
    {
        len++;
        p = strtok(NULL," ");
    }
    return len;
}

int main()
{
    int total = 0;
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
        total += numWords(buf);
    }

    printf("\nNum of words:\t%d\n",total - 1);
    fclose(fd);
    return 0;
}
