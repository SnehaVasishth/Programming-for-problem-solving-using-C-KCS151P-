// Purpose: Calculating the roots

#include<stdio.h>
#include<math.h>
void main()
{
float A,B,a,b,c,D,d,img,real;
printf("Enter the coefficients a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
D= (b*b)-(4*a*c);
printf("Value of D=%f\n",D);
if(D > 0)
{
    d= sqrt(D);
    printf("Value of d=%f\n",d);
    A= ((-b)/(2*a)) + d/(2*a);
    B= ((-b)/(2*a)) - d/(2*a);
    printf("two distint roots are\n A=%f\tB=%f",A,B);
}
else if(D == 0)
{
    d = sqrt(D);
    printf("Value of d=%f\n",d);
    A =B= ((-b)/(2*a));
    printf("both roots are equal\n A=%f\tB=%f",A,B);
}
else
{    d = sqrt(-D);
    printf("Value of d=%f\n",d);
    real= ((-b)/(2*a));
    img = (d /(2*a));
    printf("Complex roots are\n A=%f+ i%f\t B= %f-i%f",real,img,real,img);
}
getch();

}
