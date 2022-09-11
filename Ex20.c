//Purpose: Calculate Factorial using recursion

#include <stdio.h>

int fact(int n)
{

if(n==1)
    return 1;
else
    return (n * fact(n-1));
}

int main()
{
int n;
printf("enter number whose factoial is to calculate\n");
scanf("%d",&n);
printf("factorial of %d is %d\n",n, fact(n));
return 0;
}
