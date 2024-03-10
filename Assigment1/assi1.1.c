//Accept Two Numbers and find sum , difference and product


#include<stdio.h>
int main()
   {
	         int a,b,sum,sub,multi;
             printf("Enter two no : \n");
			 scanf("%d\n %d",&a,&b);
			 
			 sum = a+b;
			 printf("sum of two no: %d \n ",sum);
		
             
             sub= a-b;
			 printf("difference of two no: %d \n",sub);

			 multi= a*b;
			 printf("Product of two no: %d \n",multi);

			 return 0;
   }  


