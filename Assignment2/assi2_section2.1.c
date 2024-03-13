/*Write a program to display number of days in the given month and year using switch case
statement*/

#include<stdio.h>
int main()
{
     int year,month,day;
	 printf("Enter the month : \n");
	 scanf("%d",&month);

	 switch (month)
	 {
         case 1: printf("jan \n");
		        break;

		 case 2: printf("Feb \n");
		        break;

		 case 3: printf("March \n");
		        break;

         default: printf("Invalid Month \n");

	 }

return 0;

}











