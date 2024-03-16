/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
*******/



#include<stdio.h>
  void print_character(char ch , int num)
	  {
       for(int i=0 ; i<num ; i++){
	   printf("%c",ch);
	   }
	   printf("\n");

	  }

 int main() {
     char ch;
   	int num;


	printf("Enter charater : \n");
	scanf("%c",&ch);
	printf("Enter Number : \n");
	scanf("%d",&num);

	print_character(ch, num);

return 0;
}
