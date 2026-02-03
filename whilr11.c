#include <stdio.h>

int main() {
    int N;
    int delay;
    int i = 0;
    int totalDelay = 0;
    int delayedDays = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &delay);

        totalDelay += delay;     

        if (delay > 2) {  
            delayedDays++;
        }

        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);

    return 0;
}
