/* Write a program to print the tables of the numbers from 1 to 10.*/

#include<stdio.h>
int main()
{
 int j,i,res;
 for( i = 1 ; i <= 10 ; i++)
 {
   for(j = 1 ; j <= 10; j++ )
   {
    res = i * j;
	printf("Table from 1 to 10 : %d\n",res);
   }
   printf(" \n ");
 }

return 0;
}
