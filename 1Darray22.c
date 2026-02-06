#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int traffic[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &traffic[i]);
    }

    int peakCount = 0;

    for (int i = 1; i < N - 1; i++) {
        if (traffic[i] > traffic[i - 1] && traffic[i] > traffic[i + 1]) {
            peakCount++;
        }
    }

    printf("%d\n", peakCount);

    return 0;
}

