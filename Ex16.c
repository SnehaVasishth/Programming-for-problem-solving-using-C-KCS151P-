//Purpose: Area of rectangle

#include<stdio.h>
float area(float l, float b)
{

return(l*b);

}

void main()
{
float length, breadth;
printf("Enter the value of length and breadth\n");
scanf("%f%f", &length, &breadth);
printf("Area is : %f", area(length,breadth));
getch();



}
