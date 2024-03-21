// Write a function to calculate factorial of a given number.

#include<stdio.h>
 
 int fact(int num);
 
 int main()
 {

   int num,res;
  
   printf("Enter a number = ");
   scanf("%d",&num);
   printf("Factorial of %d = ",num);
   res = fact(num);
   printf("%d\n",res);

   return 0;
   
 }
  
  int fact(int num)
  {
    int j = num;
	for(int i=1 ; i<j ; i++)
	{
        num = num * i ;
	}
return num;

  }
  
