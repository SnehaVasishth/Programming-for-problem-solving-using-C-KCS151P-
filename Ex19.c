//Purpose: Calculate Factorial

#include <stdio.h>

int fact(int n)
{
    int i, fact=1, sum=0;
    for(i=1 ; i<=n;i++)
    {
        fact = fact*i;
        sum = fact + sum;
    }
return(sum);
}

int main()
{
int n;
printf("enter number up to which sum of series is to be calculated\n");
scanf("%d",&n);
printf("Sum of series of %d terms is %d\n",n, fact(n));
return 0;
}
