#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int attempt;
    int i = 0;
    int totalFailed = 0;
    int consecutiveFailed = 0;
    int lockAttempt = -1;

    while (i < N) {
        scanf("%d", &attempt);

        if (attempt == 0) {              
            totalFailed++;
            consecutiveFailed++;

            if (consecutiveFailed == 3 && lockAttempt == -1) {
                lockAttempt = i + 1;      
            }
        } else {
            consecutiveFailed = 0;        
        }

        i++;
    }

    if (lockAttempt == -1) {
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);
    }

    printf("Total Failed Attempts: %d\n", totalFailed);

    return 0;
}
