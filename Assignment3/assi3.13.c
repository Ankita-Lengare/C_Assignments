/* Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8 */


#include<stdio.h>
void main()
{
  int count = 0;
  int num1 = 0;
  int num2 =1;
  int num3 = 0;
  printf("Enter the count for the fibonaci series\n");
  scanf("%d",&count);
  printf("the fibonaci series is 0 ,1");
  for(int i = 3;i<=count;i++)
  {
    num3= num1+num2;

    printf(",%d",num3);
    num1 = num2;
    num2 = num3;
  }
  return 0;
}

