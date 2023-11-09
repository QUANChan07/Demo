#include<stdio.h>
int n,x,y,m;
int gcd(x,y)
{
    if(x>y)n=y,y=x,x=n;
    for(n=x;n>0;n--)
    {
        if(x%n==0&&y%n==0)break;
    }
    return n;
}
int mincomm(x,y)
{
    if(x>y)m=y,y=x,x=m;
    for(m=y;1;m++)
    {
        if(m%x==0&&m%y==0)break;
    }
    return m;
}
int main()
{
    scanf("%d %d",&x,&y);
    printf("%d %d",gcd(x,y),mincomm(x,y));
    return 0;
}
