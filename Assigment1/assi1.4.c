/*Write a program to print following pattern.
a. Using multiple printf statements

*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
  int i,j,num;
  for(i=0;i<=5;i++)
  {
    for(j=0;j<=i;j++)
	{
	printf(" * ");
	}
    printf("\n");
}	
return 0;
}
