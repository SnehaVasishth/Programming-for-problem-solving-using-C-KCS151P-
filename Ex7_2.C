#include<stdio.h>
#include<math.h>
int main()
{
    int first=0, second=1, third=0, i, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\t%d",first,second);

for(i=0;i <= n;i++)
{
    printf("\t%d",third);
    first = second;
    second = third;
    third = first+ second;
}
return 0;
}
