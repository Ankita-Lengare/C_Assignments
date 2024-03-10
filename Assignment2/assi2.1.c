/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

#include<stdio.h>
int main()
{
    int a,b,div;
	printf("Enter The Two Numbers = \n");
    scanf("%d %d",&a,&b);
    
//	div=a/b;
//	printf("Division of two number = %d \n",div);
    
	if(b==0)
	{
      printf("........Divided by zero error........");
	}
	else
	{
       div=a/b;
	   printf("Division of two number = %d \n",div);
	}
return 0;
}
