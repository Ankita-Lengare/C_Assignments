/*Write a program to accept number and check whether the number is +ve, -ve and zero.*/
#include<stdio.h>
int main()
{
      int num;
	  printf("Enter The number: \n");
	  scanf("%d",&num);

	  if(num>0)
	  {
	  printf(".....The Number is Positive.....");

	  }
	  else if(num<0)
	  {
      printf(".....The Number is Negative.....");

	  }
     else if(num == 0 )
	 {
     printf(".....The Number is Zero.....");
	 }
return 0;

}
