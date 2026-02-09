#include <stdio.h>

int main() {
    int r, c;
    int salary[r][c];
    int i, j;
    int minSum, minIndex;
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    minSum = 0;
    for (j = 0; j < c; j++) {
        minSum += salary[0][j];
    }
    minIndex = 0;
    for (i = 1; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            sum += salary[i][j];
        }

        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }
    printf("%d", minIndex);

    return 0;
}
