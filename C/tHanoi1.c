#include <stdio.h>

int moveCount;
int move(int n,char src,char dst,char aux)
{
  if(n == 0)
    return 0;
  else if(n == 1)
  {
    printf("\n%d\t%c --> %c",++moveCount,src,dst);
    return 1;
  }
  else
  {
    move(n-1,src,aux,dst);
    move(1,src,dst,aux);
    move(n-1,aux,dst,src);
    return 1;
  }
}

int main()
{
  int num;
  printf("\nPlease enter number of disks\t");
  scanf("%d",&num);
  move(num,'A','C','B');
  printf("\n");
  return 0;
}
