#include <stdio.h>

int main() {
    int n, noise;
    int i = 0;
    int violations = 0;
    int streak = 0;
    int maxStreak = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &noise);

        if (noise > 70) {
            violations++;     
            streak++;        
            if (streak > maxStreak) {
                maxStreak = streak;
            }
        } else {
            streak = 0;       
        }

        i++;
    }

    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", maxStreak);

    return 0;
}
