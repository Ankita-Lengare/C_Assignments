/*Write a program to display number of days in the given month and year using switch case
statement*/

#include<stdio.h>
int main()
{
     int year,month=12,day;
     printf("Enter the year : \n");
     scanf("%d",&year);

	 printf("Enter the month : \n");
	 scanf("%d",&month);
    
	switch (month)

	{
 
              case 2 :   if((month == 2 && year % 400 == 0) || (year % 100 != 0 && year%4==0))
	                       
                            printf("Number of days is 29 and the year is leap year");
                        	else
                            printf("Number of days is 28 ");
                            break;
						
						   
                case 1 :   if(month == 1)
                           printf("Number of days is 31");
                           break;

				case 3 :   if(month == 3)
				           printf("Number of days is 31");
						   break;
			    case 5 :   if(month == 5)
				           printf("Number of days is 31");
						   break;
				case 7 :   if(month == 7)
				           printf("Number of days is 31");
						   break;
				case 8 :   if(month == 8)
				           printf("Number of days is 31");
						   break;
                case 10 :  if(month == 10)
				           printf("Number of days is 31");
						   break;
				case 12 :  if(month == 12)
				           printf("Number of days is 31");
						   break;

		        case 4  :  if(month == 4)
                           printf("Number of days is 30");
						   break;

			    case 6  :  if(month == 6)
				           printf("Number of days is 30");
						   break;

                case 9  :  if(month == 9)
				           printf("Number of days is 30");
						   break;

                case 11 :  if(month == 11)   
				           printf("Number of days is 30");
						   break;
                       
}
return 0;


}










