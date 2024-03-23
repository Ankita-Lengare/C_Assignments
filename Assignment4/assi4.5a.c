// Write a function to print a given character for a given number of times.

#include<stdio.h>
void fun_opr(char ch , int num);

int main()
{
    int num;
    char ch;

	printf("Enter char : ");
	scanf("%c", &ch);

	printf("no. of time to print : ");
	scanf("%d", &num);

	fun_opr(ch , num);

	return 0;
}

void fun_opr(char ch , int num)
{
   for(int i =0 ; i<num; i++)
   {

       printf("%c",ch);
   }
  
  printf("\n");

 return;
}
