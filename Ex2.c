
#include<stdio.h>
#include<math.h>
void main()
{
    float BS,DA,HRA;
    float PF,gross,net;
    printf("Enter value of basic salary");
    scanf("%f",&BS);
    DA = BS*0.25;
    HRA = BS*0.15;
    gross = BS + DA + HRA;
    PF = gross*0.1;
    net = gross-PF;
    printf("BA=%f\n DA=%f\n HRA=%f\n gross=%f\nPF=%f\n net=%f",BS,DA,HRA,gross,PF,net);
    getch();
}
