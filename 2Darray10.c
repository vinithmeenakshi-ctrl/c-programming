#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];
    int maxIndex = 0;
    long long product, maxProduct;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    maxProduct = 1;
    for (int j = 0; j < c; j++) {
        maxProduct *= a[0][j];
    }
    for (int i = 1; i < r; i++) {
        product = 1;
        for (int j = 0; j < c; j++) {
            product *= a[i][j];
        }

        if (product > maxProduct) {
            maxProduct = product;
            maxIndex = i;
        }
    }
    printf("%d", maxIndex);

    return 0;
}
