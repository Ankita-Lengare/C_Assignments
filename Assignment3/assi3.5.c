/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/

#include<stdio.h>
int main()
{

  int i=1,num,res;
  printf("Enter The number :\n");
  scanf("%d",&num );
  
  while(i<num)
  {
   if(num  % i == 0)
    {
      printf("Factorial of the no : %d\n",i);
	}
           i++;
  }
 return 0;
}















