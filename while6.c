#include <stdio.h>

int main() {
    int maxWeight, N;
    int weight;
    int i = 0;
    int totalWeight = 0;
    int passengers = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &N);

   
    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            break;  
        }

        totalWeight += weight;
        passengers++;
        i++;
    }

   
    printf("Passengers Allowed: %d\n", passengers);

    if (i < N) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}
