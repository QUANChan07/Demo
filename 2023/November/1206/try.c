#include <stdio.h>
#include <math.h>
#define INT 0x3f3f3f3f
int min(long long int a,int b)
{
    int c=(a<b?a:b);
    return c;
}
int main()
{
    long long int f[1000],i,n;
    long long cost;
    scanf("%d",&n);
    f[0]=0;
    for(i=1;i<=n;i++)
    {
        cost=INT;
        if(i-1>=0)cost=min(cost,f[i-1]+1);
        if(i-5>=0)cost=min(cost,f[i-5]+1);
        if(i-11>=0)cost=min(cost,f[i-11]+1);
        f[i]=cost;
    }
    printf("%d",f[n]);
    return 0;
}