#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int Duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                Duplicate = 1;
                break;
            }
        }

        if (!Duplicate) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
