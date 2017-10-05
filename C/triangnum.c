#include <stdio.h>

int tnum(int n)
{
    if(n==1)
        return 1;
    else
        return n+tnum(n-1);
}
int main()
{
    int n=0;
    printf("\nEnter n\t");
    scanf("%d",&n);
    printf("\nnth triangular num is:\t%d\n",tnum(n));
    return 0;
}
