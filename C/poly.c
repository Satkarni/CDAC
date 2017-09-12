#include <stdio.h>



double horner(double *d,double x,int n)
{
    if(n==2)
    {
        return d[n-2]*x + d[n-1];
    }else
    {
        return horner(d,x,n-1)*x + d[n-1];
    }
}

int main()
{

    double coeff[] = {
        1,1,2,6,8
    };
    double x;
    printf("\nEnter value of x:\t");
    scanf("%lf",&x);
    int n = sizeof(coeff)/sizeof(coeff[0]);
    for(int i=0;i<n;i++)
    {
        if(i != n-1)
            printf("%0.0lfx^%d ",coeff[i],n-i-1);
        else
            printf("%0.0lf",coeff[i]);

        if(i!= n-1)
        printf("+ ");
    }

    printf("\nValue is:  %0.3lf\n",horner(coeff,x,n));    
    return 0;
}
