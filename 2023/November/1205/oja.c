#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,n1,i,j,b=0,a=1;
    char str[10],temp;
    char *p;
    scanf("%s",str);
    n=strlen(str);
    p=str;
    n1=n;
    char tstr[n];
    strcpy(tstr,str);
    for(j=0; j<n-1; j++)
    {
        for(i=j; i<n; i++)
        {
            if(tstr[j]>tstr[i])temp=tstr[j],tstr[j]=tstr[i],tstr[i]=temp;
        }
        if(j==n-2)
        {
            for(i=0;i<n-1;i++)
            {
                if(tstr[i]!=tstr[i+1])
                {
                    b++;
                    a*=n1;
                    n1--;
                }
            }
        }
    }
    printf("%d",a);
    //for(i=0;i<a-1;i++)
    //{
        
    //}
    //printf("%s",tstr);
    return 0;
}
