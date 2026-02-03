#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int index[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &index[i]);
    }

    int i = 1;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    while (i < N) {
        if (index[i] < index[i - 1]) {
            totalDrops++;
            consecutiveDrops++;
            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1; 
            }
        } else {
            consecutiveDrops = 0;
        }
        i++;
    }
   if (crashDay == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", crashDay);
    }
    printf("Total Drops: %d\n", totalDrops);

    return 0;
}
