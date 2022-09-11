#include<stdio.h>
struct players
{
 char name[20];
 int avg;
};

void main()
{
    struct players p[6];
int i;
for(i=0; i<5; i++)
{
printf("enter the name\n");
scanf(" %[^\n]s", p[i].name);
printf("enter the batting average\n");
scanf(" %d", &p[i].avg);
}


for(i=0; i<5; i++)
{
    if(p[i].avg>50)
    {
        printf("%s \t %d", p[i].name, p[i].avg);
printf("\n");
}
}
getch();
}

