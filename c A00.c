#include<stdio.h>
main()
{
    int x;
    char y;
    scanf("%d",&x);
    if(x>=90)y='A';
    if (80<=x&&x<90)y='B';
    if(70<=x&&x<80)y='C';
    if(60<=x&&x<70)y='D';
    if(x<60)y='E';
    printf("%c\n",y);
    return 0;
}