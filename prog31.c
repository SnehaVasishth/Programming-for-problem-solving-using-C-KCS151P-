#include<stdio.h>
void main()
{
int flag=0;
char a[30];
int i=0, h=0;
printf("enter the element\n");
while(a[i]!= '\n')
{
a[i]= getchar();
i++;

}
i--;
a[i]= '\0';


h=i;
i=0;
while(i<h)
{
if(a[i]== a[h])
flag=1;
else
{
flag= 0;
break;
}
i++;
h--;

}
if(flag==1)
printf("%s is palindrome", a);
else

printf("%s is NOT palindrome", a);
}