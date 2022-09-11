/*Purpose: Fabonacci Series using For loop*/


#include<stdio.h>

int main()
{
    int first=0, second=1, third, i, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\t%d",first,second);

for(i=2;i <= n;i++)
{
    third = first+ second;
    printf("\t%d",third);
    first = second;
    second = third;
}
return 0;
}
