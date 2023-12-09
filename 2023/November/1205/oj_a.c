#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void dfs(char *arr, char *arr1,int start, int end,int n,int a,int c) {
    int i,b=0,j;
    if (start == end) {
        for(i=0;i<a;i++)
        {
            for(j=0;j<n;j++)
            {
            }
        }
        if(b==n)
        printf("%s\n", arr);
        for(i=0;i<n;i++)
        {
            arr1[i]=arr[i];
        }
    } else {
        for (int i = start; i <= end; i++) {
            swap((arr + start), (arr + i));
            dfs(arr, arr1,start + 1, end,n,a,c);
            swap((arr + start), (arr + i)); // »Ö¸´Ô­Êı×é
        }
    }
}

int main() {
    char arr[10];
    scanf("%s",arr);
    int n,n1,i,j,b=0,a=1,c=0;
    char arr[10],temp;
    //char *p;
    //scanf("%s",str);
    n=strlen(arr);
    //p=str;
    n1=n;
    char tstr[n];
    strcpy(tstr,arr);
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
    char arr1[a][10];
    dfs(arr, arr1[a],0, n - 1,n,a,c);
    return 0;
}
