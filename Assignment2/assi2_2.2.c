/*Write a program to crate four function calculator. Four functions are +, - , *, / */

#include<stdio.h>
int main()
{
     int add,sub,multi,divi,num1,num2;
	 char opr;
	 printf("Enter the two no and opr \n");
	 scanf("%d %d %c",&num1,&num2,&opr);
    

     switch(opr)

	 {
	  case '+' : printf("addition of two no: %d\n",add = num1 + num2);
	             break;

	  case '-' : printf("subtraction  of two no: %d\n",sub = num1-num2);
	             break;

	  case '*' : printf("multiplication of two no: %d\n",multi = num1*num2);
	             break;

      case '/' : printf("division of two no: %d\n",divi = num1 / num2);
                 break;
}

return 0;				 
}
