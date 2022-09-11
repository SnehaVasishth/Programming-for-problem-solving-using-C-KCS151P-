/* Purpose: Print the sum of series */

#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
float num,fact=1,total=1;
printf("Enter the value of n and num\n");
scanf("%d%f",&n,&num);
for(i=1;i<n;i++)
{
fact= fact*i;
total= total+ (((pow(-1,i))*(pow(num,i)))/fact);
}
printf("The sum of series :%f\n",total);
getch();
}
