/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/

#include<stdio.h>
#include<math.h>
int main()
{ 
    float a,b,c,peri,area,s;
	printf("Enter 3 sides : ");
	scanf("%f %f %f",&a,&b,&c);
	peri = a + b + c;
	printf("Perimeter of triangle is : %f\n",peri);
   
    s = (peri/2);
    area = sqrt(s* (s-a) * (s-b) * (s-c));
    printf("\n area of triangle is : %f\n",area);



return 0;
}
