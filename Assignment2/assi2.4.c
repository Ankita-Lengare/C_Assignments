/*Write a program to find maximum of two numbers using*/
//                 a.If – else




#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter Two Number: \n");
   scanf("%d %d",&a,&b);

   if(a>b)
   {
     printf("The Maximum Number is %d \n",a);
   }
  else
  {
    printf("The Number b is Minimum %d \n",b);
  }

return 0;
}
