//Purpose: Sum of fibonacci series

#include<stdio.h>
void fabinocci(int num)
{
int a1=0, a2=1, s, i, sum=0;
printf("%d\t%d\t",a1,a2);
for(i=1;i<=num-2;i++)
{
s= a1+ a2;
sum= sum + s;
printf("%d\t",s);
a1= a2;
a2= s;
}
printf("\n The sum of series is: %d", sum+1);
}
void main()
{
int num;
printf("Enter the number you want in the series\n");
scanf("%d",&num);
fabinocci(num);
getch();
}
