#include <stdio.h>

int main()
{
 long long int n;
 scanf("%lld", &n);

 for (long long int k = 1; k <= n; k++)
 {
    long long total_positions = k * k;
 long long knight_positions = total_positions * (total_positions - 1) / 2;
 if (k > 2)
 {
 knight_positions -= 4 * (k - 1) * (k - 2); //排除两个骑士可以互相攻击的位置
}
 printf("%lld\n", knight_positions);
}

 printf("\n");
 return 0;
}