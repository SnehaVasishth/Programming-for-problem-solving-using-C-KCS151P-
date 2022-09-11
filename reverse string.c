#include<stdio.h>
void main()
{
int i=0,h, count=0;
char ch, temp;
char a[20];
fflush(stdin);
while(a[i]!='\n')
{

a[i]= getchar();
i++;
count++;

}
printf("length= %d\n", count);
printf("%s\n", a);
h= count-1;
while(i<h)
{
for(i=0; i<count; i++)
{
temp = a[h];
a[h]= a[i];
a[i]= temp;
h--;
}
}
printf("%s\n", a);

}
