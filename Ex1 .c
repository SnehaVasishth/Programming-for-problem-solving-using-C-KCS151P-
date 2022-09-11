#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,s;
    float area;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    s   = (a+b+c)/2;
    area    = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area is %f\n",area);
    getch();
}

