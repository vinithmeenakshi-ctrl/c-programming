#include <stdio.h>

int main() {
    int maxWeight, N;
    int weight;
    int i = 0;
    int totalWeight = 0;
    int peopleEntered = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            break;  
        }

        totalWeight += weight;
        peopleEntered++;
        i++;
    }
    printf("People Entered: %d\n", peopleEntered);

    if (peopleEntered < N) {
        printf("Overload Status: Yes\n");
    } else {
        printf("Overload Status: No\n");
    }

    return 0;
}
