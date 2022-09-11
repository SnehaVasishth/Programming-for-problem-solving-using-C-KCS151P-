/*Purpose:Largest number out of 3 using nested if-else*/

#include<math.h>
void main()
{
float largest, a,b,c;
printf("Enter the values of a, b, c\n");
scanf("%f%f%f",&a,&b,&c);
largest=a;
if(a>b)
{
    if(a>c)
    {
    largest=a;
    printf("largest number is %f\n",largest);
    }
    else
    {
    largest=c;
    printf("largest number is %f\n",largest);
    }
}
else
{
    if(b>c)
    {
    largest=b;
    printf("largest number is %f\n",largest);
    }
    else
    {
    largest=c;
    printf("largest number is %f\n",largest);

    }
}
getch();
}












