#include <stdio.h>

int main()
{

int n;
scanf("%d",&n);

printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
            printf("%d ",i+1);
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
            printf("%d ",n-i);
        printf("\n");
    }
    return 0;
}
