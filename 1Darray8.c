#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    int temp[k];
    for(i = 0; i < k; i++) {
        temp[i] = a[i];
    }

    for(i = 0; i < n - k; i++) {
        a[i] = a[i + k];
    }

    for(i = 0; i < k; i++) {
        a[n - k + i] = temp[i];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
