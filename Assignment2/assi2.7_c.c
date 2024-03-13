//c. Conditional operator

#include<stdio.h>
int main()
{
         int year;
		 printf("Enter The Year : \n");
		 scanf("%d",&year);

		 year =((year % 400 == 0 && year % 100 != 0) || year % 4 == 0 ) ? printf("%d is the leap year \n",year) : printf("%d is not a leap year \n",year);
 
return 0 ;
}
