/* Purpose: Return sum of all the odd digits of the enterd number*/


#include<stdio.h>

int sum_odd(int num)//A function which will return sum of all odd digits
{
int rem, i,sum=0,n;
n= digit(num);
for(i=1;i<= n;i++)
{
rem= num % 10;
num= num / 10;
if(rem % 2 != 0)
sum = sum + rem;
}
return(sum);
}

int digit(int num)// A function which will return number of digits in the entered number
{
int count=0;
while(num!=0)
{

num= num / 10;
count++;
}
printf("%d\n",count);
return(count);
}


void main()
{
int num;
printf("Enter the number whose sum of all odd digits you want\n");
scanf("%d", &num);
printf("The Result is:\n %d",sum_odd(num));
getch();
}





