
 #include<stdio.h>
int decimal(int num)
{
int i=1, con=0, rem=0;
while(num!=0)
{
    rem= num%10;
    num = num/10;
    con= con+ rem * i;
    i = i*2;

}
return(con);

}
int main()
{
int num;
printf(" enter the value whose binary conversion you want\n");
scanf("%d", &num);
printf("decimal equivalent of %d = %d", num, decimal(num));
getch();

}
