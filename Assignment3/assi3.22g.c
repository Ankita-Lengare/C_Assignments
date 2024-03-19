/*
A B C D
B C D
C D
D
*/

#include<stdio.h>
int main()
{
  char ch = 'A';
  int count = 4;
  for(int i = 0 ; i < 4 ; i++ )
  {
    for(int j = 4; j > i ; j--)
    {
	  printf("%c ",ch);
      ch++;
    }
    printf("\n");
	count--;
	ch = ch - count;
  }
  return 0;
}





