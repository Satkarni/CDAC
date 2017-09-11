#include <stdio.h>

char getTmp(char src,char dst)
{
  if(src == 'A' && dst == 'B')
    return 'C';
  else if(src == 'A' && dst == 'C')
    return 'B';
  else if(src == 'B' && dst == 'A')
    return 'C';
  else if(src == 'B' && dst == 'C')
    return 'A';
  else if(src == 'C' && dst == 'A')
    return 'B';
  else if(src == 'C' && dst == 'B')
    return 'A';
  else
    return 0;
}

int move(int n,char src,char dst)
{
  if(n == 0)
    return 0;
  else if(n == 1)
  {
    printf("\n%c --> %c",src,dst);
    return 1;
  }
  else
  {
    char tmp = getTmp(src,dst);
    move(n-1,src,tmp);
    move(1,src,dst);
    move(n-1,tmp,dst);
    return 1;
  }
}

int main()
{
  int num;
  printf("\nPlease enter number of disks\t");
  scanf("%d",&num);
  move(num,'A','C');
  printf("\n");
  return 0;
}
