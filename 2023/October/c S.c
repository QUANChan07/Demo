#include <stdio.h>
#include<stdlib.h>
int main()
{
    float r,h,C1,Sa,Sb,Va,Vb;
    scanf("%f %f",&r,&h);
    Sa=r*r*3.14,C1=2*r*3.14,Sb=4*Sa,Va=(4.0/3)*Sa*r,Vb=h*Sa;
    printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",C1,Sa,Sb,Va,Vb);
    return 0;
}

