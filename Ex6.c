#include<math.h>
#include<stdio.h>
void main()
{
int a, x, b,n;
float y;
printf("Enter the value of a,x,b,n: \n");
scanf("%d%d%d%d",&a,&x,&b,&n);
switch(n)
{

case 1:
    y= (a*x) % b;
    printf("Value of y=%f\n",y);
    break;
case 2:
    y= (a*x*x)+(b*b);
    printf("Value of y=%f\n",y);
    break;


case 3:
    y= a-(b*x);
    printf("Value of y=%f\n",y);
    break;

case 4:
    y= a+((float)x/b);
    printf("Value of y=%f\n",y);
    break;
default:
    printf("Wrong Choice of value of n");
}
getch();
}

