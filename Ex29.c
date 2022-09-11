#include<stdio.h>
void multiply(int a[20][20],int b[20][20],int m,int n,int p,int q);
void put_matrix(int a[20][20],int m,int n);
void print(int a[20][20],int m,int n);

void main()
{
int a[20][20], b[20][20], m,n,p,q;
printf("enter the number of rows and column of  matrix a \n");
scanf("%d%d" ,&m,&n);
printf("enter the number of rows and column of  matrix b \n");
scanf("%d%d" ,&p,&q);
put_matrix(a, m,n);
print(a,m,n);
put_matrix(b, p,q);
print(b,p,q);
printf("Multiplication is:\n");
multiply(a,b,m,n,p,q);
getch();
}
void put_matrix(int a[20][20],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{

scanf("%d", &a[i][j]);
}
}
}
void print(int a[20][20],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{

printf("%d\t", a[i][j]);
}
printf("\n");
}
}

void multiply(int a[20][20],int b[20][20],int m,int n,int p,int q)
{
int c[20][20],i,j,k;
for(i=0; i<m; i++)
{
for(j=0; j<q; j++)
{
c[i][j]=0;

for(k=0; k<n; k++)
{
c[i][j]= a[i][k]* b[k][j]+ c[i][j];
}
}
}
print(c,m,q);

}

