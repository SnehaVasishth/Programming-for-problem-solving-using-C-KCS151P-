#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a,n,i,j;
printf("enter the value of n \n");
scanf("%d",&n);
a=(int*)calloc(n,n*sizeof(int));
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",*(a+i)+j);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
printf("%d",*(a+j)+i);
}
