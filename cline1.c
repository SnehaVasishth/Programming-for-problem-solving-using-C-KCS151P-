#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[])
{
    int count;
    printf("argc =%d\n",argc);
    for(count = 0;count < argc; count++)
    printf("argv[%d]=%s\n",count, argv[count]);

}
