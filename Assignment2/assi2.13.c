//Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
//which the point lies. Also check for special cases point lies on X-axis, y-axis origin


#include<stdio.h>
int main()

{
          int x,y;
		  printf("Enter the value of x axis = \n");
		  scanf("%d",&x);

		  printf("Enter the value of y axis = \n");
          scanf("%d",&y);

		  if(x>0 && y>0)
		  printf("point present in the 1st  quadrant \n");
		  else if(x<0 && y>0)
		  printf("point present in the 2nd  quadrant \n");
		  else if(x<0 && y<0)
		  printf("point present in the 3rd  quadrant \n");
		  else if(x>0 && y<0)
		  printf("point present in the first quadrant \n");
          else if(x>0 && y == 0)
		  printf("point on positive X-Axis \n");
		  else if(x == 0 && y>0)
		  printf("point on positive Y-Axis \n");
		  else if(x<0 && y == 0)
		  printf("point on Negative (-X-Axis)\n");
		  else if(x == 0 && y<0)
		  printf("point on Negative (-Y-Axis) \n");
          else
		  printf("point present on origin \n");
return 0;
}
