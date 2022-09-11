#include<stdio.h>
int main()
{

int i,n,rem;
printf("Prime Numbers from 1 to 300:");
for(i=2;i<=300;i++)
{
    for(n=2;n < i;++n)
    {
        rem = i % n;
        if(rem == 0)
           {
               break;
           }
    }
    if(n-1==i-1)
        printf("%d\t",i);
}
return 0;
}




