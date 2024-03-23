//Write a function to calculate power.

#include<stdio.h>
#include<math.h>
int power(int base, int index)
{

 int p=1;
 for(int i=1 ; i<= index ; i++ )
 
    p *= base;
	return p;
}

int main(void)
{
  int num,b,i,p;
  printf("Enter the number = ");
  scanf("%d",&num);
  printf("Enter base and index : ");
  scanf("%d %d",&b ,&i);
  p = power(b , i);
  printf("%d ^ %d= %d\n",b,i,p);

  return 0;
}
