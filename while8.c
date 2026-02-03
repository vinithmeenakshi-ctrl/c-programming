#include <stdio.h>

int main() {
    int N;
    int status;
    int i = 0;
    int currentStreak = 0;
    int longestStreak = 0;

   
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {          
            currentStreak++;
            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {                    
            currentStreak = 0;
        }

        i++;
    }
    printf("Longest Default Streak: %d\n", longestStreak);

    return 0;
}
