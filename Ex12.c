/*Purpose: Armstrong numbers from 100 to 500 */


#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,quo,total=0,i;
printf("Armstrong numbers from 100 to 500 are:\n");

for(i=100;i<=500;i++)
{
n=i;
total=0;
while(1)
{
rem= n%10;
quo= n/10;
total= (rem*rem*rem)+total;
n=quo;
if(quo==0)
break;
}
if(total==i)
printf("%d\t",i);
}
return 0;
}
