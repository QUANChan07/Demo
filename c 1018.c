#include<stdio.h>
#include<math.h>
#include<string.h>
double a,b,c,delta,x[4];
struct arry{
    double x[4];
};
//int lessthan0,equal0,greaterthan0;
double lessthan0(a,b,c)
{
    x[1]=-b/2*a;
    x[3]=-b/2*a;
    x[0]=delta/(2*a);
    x[2]=delta/(2*a);
    struct arry myfun()
    {
    struct arry x={x[1],x[2],x[3],x[4]};
    return x;
}
}
double equal0(a,b,c)
{
    x[0]=-b/(2*a)+delta/(2*a);
    x[1]=x[0];
    return x;
}
double greaterthan0(a,b,c)
{
    x[0]=-b/(2*a)+delta/(2*a);
    x[1]=-b/(2*a)-delta/(2*a);
    return x;
}
int main()
{
    scanf("%lf %lf %lf",&a,&b,&c);
    if(b*b-4*a*c==0){delta=sqrt(b*b-4*a*c);printf("x1=%lf x2=%lf",equal0(a,b,c));}
    else if(b*b-4*a*c>0){delta=sqrt(b*b-4*a*c);printf("x1=%lf x2=%lf",greaterthan0(a,b,c));}
    else{ 
    delta=abs(b*b-4*a*c);
        delta=sqrt(delta);
        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n",lessthan0(a,b,c));
    }
    return 0;
}