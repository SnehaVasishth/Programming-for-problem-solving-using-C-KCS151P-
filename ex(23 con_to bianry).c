
 #include<stdio.h>
int binary(int num)
{
int i=1, con=0, rem=0;
while(num!=0)
{
    rem= num%2;
    num = num/2;
    con= con+ rem * i;
    i = i*10;

}
return(con);

}
int main()
{
int num;
printf(" enter the value whose binary conversion you want\n");
scanf("%d", &num);
printf("Binary equivalent of %d = %d", num, binary(num));
getch();

}
