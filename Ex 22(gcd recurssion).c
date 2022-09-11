#include<stdio.h>
int gcd (int m, int n)
{

if( m==n)
 return(m);

 else
 {

    if(m-n<=n)
{
   m= n;
    n= m-n;

 return(gcd(m,n));
}

 else
    return(gcd(m-n,n));
 }
}

int main()
{
int m,n, temp=0;
printf("enter the value of m, n\n");
scanf("%d%d",&m,&n);
if(m<n)
{
    temp= m;
    n= m;
    m = n;
}

printf(" the gcd is: %d", gcd(m,n));
return 0;
}
