#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a,b,c,d,n,c1,a1,b1,e1,d1,f,g,h,j;
    char e;
    n=0,b=1,a1=-1,b1=0,g=3;
    while(scanf("%d %c",&a,&e)!=EOF){
    while(b>=0){//����ʣ�������c
       n++;
       c=b;
       b=a-2*n*n+1;
    }
    h=n-1;//��ʱhΪ�ϲ��ֵ����ǲ���
    n=n-1;
    j=n;
    while(b1<=(j-1)){//����ϰ벿�ֵ�����
    a1=a1+1;
    b1=a1;
    b1=a1;
    d=2*n-1;
    if(d>=1){while(b1--)printf(" ");}
    if(d<=0)break;
    while(d--)printf("%c",e);
    n--;
    printf("\n");}
    //while(b1>(j-1)){//����°벿��
    while(1){
    f=g;
    d1=h-2;
    //printf("%d",g);
    //if (d1<0)break;
    while(d1--)printf(" ");
    while(f--)printf("%c",e);
    printf("\n");
    if(g>=(2*j-1))break;
    g+=2;
    h--;
    }
    printf("%d\n",c);//���ʣ�������
    b=1,a1=-1,b1=0,g=3;
    }
        return 0;
}