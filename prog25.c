#include<stdio.h>
void main()
{
int i=0,j=0,k;
int a[10], duplicate=0, n;
printf("Enter the no. of elements\n");
scanf("%d", &n);
for(i=0; i<n; i++)
scanf("%d", &a[i]);

for(i=0; i<n; i++)
printf("%d\n", a[i]);

for(i=0; i<n-1; i++)
{
	duplicate=1;
for(j= i+1; j<n; j++)
{
if(a[i]== a[j])
{
duplicate++;
for(k= j+1; k<n; k++)
{
a[k-1]= a[k];

}
n--;
printf("%d is coming %d times\n", a[i], duplicate);
}

}

}
for(i=0; i<n; i++)
printf("%d\n", a[i]);
}