/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
3
4 5 6
6
8 10 12
9 12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60 */


#include<stdio.h>
int main()
{
  int i,j,num1,num2,res; 
  printf("Enter the range(num1-num2): ");
  scanf("%d %d",&num1,&num2);
  for(i = num1 ; i <= num2 ; i++)
  {
  for(j = 1 ; j <= 10; j++)
  {
   res = j * i;
   printf("Table of given entred number is : %d\n",res);

  }

  printf("\n");
  }

return 0;
}































