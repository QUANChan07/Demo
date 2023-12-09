#include <stdio.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void dfs(char *arr, int start, int end) {
    if (start == end) {
        printf("%s\n", arr);
    } else {
        for (int i = start; i <= end; i++) {
            swap((arr + start), (arr + i));
            dfs(arr, start + 1, end);
            swap((arr + start), (arr + i)); // »Ö¸´Ô­Êý×é
        }
    }
}

int main() {
    char arr[] = "abc";
    int n = strlen(arr);
    dfs(arr, 0, n - 1);
    return 0;
}
