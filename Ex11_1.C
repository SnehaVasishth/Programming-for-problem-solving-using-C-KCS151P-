#include<stdio.h>
int main()
{
int i,n,rem,flag=0;
printf("Prime Numbers from 1 to 300:");
printf("%d\n",2);
for(i=2;i<=300;i++)
{
    for(n=2;n < i;n++)
    {
        rem = i % n;
        if(rem==0)
        {
            flag =0;
            break;
        }
        flag =1;
    }
    if(flag ==1)
        printf("%d\t",i);
}
return 0;
}




