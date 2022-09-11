/*Purpose: Pattern printing using For loop*/


#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=3;i++)
{
for(j=4-i;j<=4-i;j--)
{
printf("%d\t",j);
if(j==1)
    break;
}
printf("\n");

}
getch();
}
