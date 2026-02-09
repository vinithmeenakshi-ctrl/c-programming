#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int count = 0;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++){
        int stored = 0;

        for (int j = 0; j < c - 1; j++) {
            if (a[i][j] >= a[i][j + 1]) {
                stored = 1;
                break;
            }
        }

        if (stored){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
