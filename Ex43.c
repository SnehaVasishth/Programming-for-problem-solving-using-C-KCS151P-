#include<stdio.h>
#include<stdlib.h>
void main()
{
int *y,*k,n,i,j,p,q;
printf("enter the value of n\n");
scanf("%d", &n);
y=(int *)calloc(n,n*sizeof(int));
k=(int *)calloc(n,n*sizeof(int));
printf("enter the value of row and column\n");
scanf("%d%d",&p,&q);
for(i=0; i<p; i++)
{
for(j=0;j<q;j++)
scanf("%d",((y+i)+j));
}
for(i=0; i<p; i++)
{
printf("\n");

for(j=0;j<q;j++)
printf("%d\t",*((y+i)+j));

}
printf("\n");

for(i=0; i<p; i++)
{
for(j=0;j<q;j++)
{
*((k+j)+i)= *((y+i)+j);
printf("%d\t",*((k+j)+i));
}
printf("\n");
}
getch();
}
