/* Purpose: Print the sum of series of fctorial*/

#include<stdio.h>
int main()
{
int n,i,fact=1,total=0;
printf("Enter the value of n\n",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact= fact*i;
total= total+ fact;
}
printf("The sum of series of  factorial:%d\n",total);
getch();
}
