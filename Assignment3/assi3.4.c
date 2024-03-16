/*Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/

#include<stdio.h>
int main()
{
       int num, i=1,fact=1;
	   printf("Enter the number :\n");
	   scanf("%d",&num);

      while(num>=i)
	  {
      fact = fact * i;
	  i++;
	  }
     
	 printf("factorial of the numbers is : %d \n",fact);

return 0;
}





















































