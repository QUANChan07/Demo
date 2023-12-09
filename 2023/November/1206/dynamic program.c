#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    long long int apple[n + 1], f[1000]={0};
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &apple[i]);
        sum += apple[i];
    }
    for (i = 1; i <= n; i++) 
    {
         // Initialize f array with 0
        for (int j = sum / 2; j >= apple[i]; j--) 
        {
            f[j] = max(f[j], f[j - apple[i]] + apple[i]);
        }
    }
    printf("%lld\n",sum- f[sum / 2]);
    return 0;
}