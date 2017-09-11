#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char output[1000] = {0};    
typedef long long ll;
const char *words[30] = { 
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    "twenty ",
    "thirty ",
    "forty ",
    "fifty ",
    "sixty ",
    "seventy ",
    "eighty ",
    "ninety "
};

void getlast2digits(char *o,ll num)
{
    int n = num%100;
    if(n<21 && n>0)
    {
        strcat(o,words[n]);
    }
    else
    {
        if(n != 0)
        {
            strcat(o,words[(n/10) +18 ]);
           if(n%10 != 0)
            strcat(o,words[n%10]);
        }
    }
}
void getlast3digits(char *o,ll num)
{
    int n = num/100;
    if(n<10 && n>=1)
    {
        strcat(o,words[n]);
        if(num%100 != 0)
        strcat(o," hundred and ");
        else
        strcat(o," hundred ");
        
        getlast2digits(o,num);
    }else
    {
        getlast2digits(o,num%100);
    }
}
void printa(int *a)
{
    printf("\n");
    for(int i=0;i<5;i++)
    {
       printf("%d  ",a[i]);
    }
    printf("\n");
}
long decimate(int n)
{
    long i=1;
    while(n--)
    {
        i *= 10;
    }
    return i;
}
void splitNum(int *a,ll num)
{
    int i=0;
    while(num>1000)
    {
         a[i] = num/decimate(9-i*2);
         num = num%decimate(9-i*2);
         i++;
    }
    if(num == 0)
    {
        strcat(output,"zero");
    }else
    a[4] = num;
    for(int i=0;i<5;i++)
    {
        if(a[i] != 0)
        {
            switch(i)
            {
                case 0:
                    getlast3digits(output,a[i]);
                    strcat(output," abj ");
                break;
                case 1:
                    getlast2digits(output,a[i]);
                    strcat(output," crore ");
                break;
                case 2:
                    getlast2digits(output,a[i]);
                    strcat(output," lakh ");
                break;
                case 3:
                    getlast2digits(output,a[i]);
                    strcat(output," thousand ");
                break;
                case 4:
                    getlast3digits(output,a[i]);
                break;
             }
        }
    }
    printf("%s\n",output);
}
int main()
{
    ll num=0;
    scanf("%lld",&num);
    int arr[10];
    splitNum(arr,num); 
   return 0;
}
