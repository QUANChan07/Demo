#include <stdio.h>
#include <stdlib.h>
long long int fmax(long long int a,long long int b)
{
    long long c;
    c=(a>b?a:b);
    return c;
}
long long int minDiff(long long arr[], int n) {
    long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    long int dp[n+1][sum/2+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum/2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (arr[i-1] <= j) {
                dp[i][j] = fmax(dp[i-1][j], dp[i-1][j-arr[i-1]] + arr[i-1]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return sum - 2 * dp[n][sum/2];
}

int main() {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long int result = minDiff(arr, n);
    printf("%lld\n", result);

    return 0;
}
