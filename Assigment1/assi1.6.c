// print the table

#include<stdio.h>
int main()
{
   int num,res=1;
   printf("Enter a number : ");
   scanf("%d",&num);

  for(int i=1;i<=10;i++)
  {
  res = num * i;
  printf("table of given number is : %d\n",res);

  }
  
return 0;
}
