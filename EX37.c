#include<stdio.h>
#include<stdlib.h>
void main()
{
int count=0;
char ch;
FILE *f1,*f2;
f1= fopen("stderr.txt","r");
if (f1 == NULL)
{
printf("Cannot open file  \n");
}
f2= fopen("b.txt","w");
if (f2 == NULL)
{
printf("Cannot open file  \n");
}
while(ch!=EOF)
{
fscanf(f1,"%c",&ch);
count++;
fputc(ch, f2);

}
fclose(f1);
fclose(f2);
getch();

}
