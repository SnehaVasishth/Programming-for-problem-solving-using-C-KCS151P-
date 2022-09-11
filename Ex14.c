#include<stdio.h>
#include<math.h>
void main()
{

int num,n,i,j,rev=0,rem;
printf("Enter the value of number of digits and number itself:\n");
scanf("%d%d",&n,&num);

for(i=n-1;i>=0;i--)
{
    rem= num%10;
    num = num/10;
    rev= rem* (pow(10,i))+ rev;
}
printf("%d\n",rev);
for(j=1;j<=n;j++)
{
    rem =rev % 10 ;
    rev = rev / 10;
    printf("%d\n",rem);

}
getch();
}
