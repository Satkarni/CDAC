#include <stdio.h>

int main()
{
  char end[] = "\nNo more bottles of beer on the wall, no more bottles of beer.\
                \nWe've taken them down and passed them around; now we're drunk and passed out!";

  for(int i=98;i>0;i--)
  {
    printf("\n%d bottles of beer on the wall, %d bottles of beer.",i+1,i+1);
    printf("\nTake one down, pass it around, %d bottles of beer on the wall...",i);
  }
  printf("\n%s",end);


  return 0;

}
