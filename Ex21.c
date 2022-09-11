//Purpose: Sum of digits of 5 digit number using recurssion

#include<stdio.h>
int sum(int num)
{
int rem, total=0;
if (num%10== num)
total= num;
else
{
    rem= num %10;
    num= num/10;
    total = rem + sum(num);
}
return(total);

}
void main()
{
int num;
printf("Enter the number whose sum of digit you want\n");
scanf("%d", &num);
printf("The sum of digits of %d is %d", num, sum(num));
getch();
}
