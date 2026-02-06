#include <stdio.h>

int main() {
    int n, i,
    sum = 0;
    scanf("%d", &n);

    int a[n-1];
    for(i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    int expected = n * (n + 1) / 2;
    printf("%d", expected - sum);

    return 0;
}
