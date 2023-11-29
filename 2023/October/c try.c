#include <stdio.h>
int main()
{
    int a, b, c, d, n, c1, a1, b1, d1, f, g, h, j,i;
    char e;
    n = 0, b = 1, a1 = 0, b1 = 0, g = 1;
    while (scanf("%d %c", &a, &e) != EOF)
    {
        while (b >= 0) 
        {
            n++;
            c = b;
            b = a - 2 * n * n + 1;
        }
        h = n - 1;//n-1 is the angle'number of plies
        j = n - 1;
        while (b1 <= (h-1)) //above
        {
            a1 = a1 + 1;
            b1 = a1;
            while (b1--)printf(" ");
            b1 = a1;
            n--;
            d = 2 * (n) - 1;
            if (d < 1)break;
            while (d--)printf("%c", e);
            printf("\n");
        }
        while (1) 
        {
            //if (g >= (2 * j - 1))break;
            d1 = h - 1;
            if (d1<1)break;
            while (d1--)printf(" ");
            f = g+2;
            while (f--)printf("%c", e);
            g += 2;
            h--;
            printf("\n");
        }
        printf("%d\n", c);//Êä³öÊ£Óà·ûºÅÊý
        g = 1;
        a1 = 0;
        n = 0;
        b = 1;
        b1 = 0;
    }
    return 0;
}