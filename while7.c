#include <stdio.h>

int main() {
    int capacity, N;
    int change;
    int occupied = 0;
    int criticalCount = 0;
    int i = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);

    
    while (i < N) {
        scanf("%d", &change);
        occupied = occupied + change;

        if (occupied > (capacity * 90) / 100) {
            criticalCount++;
        }

        i++;
    }


    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}
