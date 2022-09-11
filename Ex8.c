/*Purpose: Armstrong Number*/

#include<stdio.h>
#include<math.h>
int main()
{
int num,n,rem,quo,total=0;
printf("Enter the number\n",num);
scanf("%d",&num);
n=num;
while(1)
{
rem= n%10;
quo= n/10;
total= (rem*rem*rem)+total;
n=quo;
if(quo==0)
break;
}
printf("num=%d \t total=%d",num,total);
if(total==num)
printf("\n%d is the Armstrong Number\n",num);
else
printf("\n%d is NOT the Armstrong Number\n",num);

getch();
}
