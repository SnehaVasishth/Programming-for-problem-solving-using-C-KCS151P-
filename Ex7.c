#include<stdio.h>
#include<math.h>
void main()
{
int first=0, second=1, third, i, n, temp;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("%d\t%d",first,second);
third = first+ second;
printf("\t%d",third);

for(i=1;i <= n;i++)
{
    temp = second;
    first = temp;
    second= third;
    third = first+ second;
printf("\t%d",third);
}
getch();
}
