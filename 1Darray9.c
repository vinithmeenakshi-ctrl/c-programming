#include <stdio.h>

int main() {
    int n, i, max;
    scanf("%d", &n);

    int a[n], leaders[n], idx = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[n-1];
    leaders[idx++] = max; 

    for(i = n-2; i >= 0; i--) {
        if(a[i] > max) {
            max = a[i];
            leaders[idx++] = max;
        }
    }
    for(i = idx-1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
