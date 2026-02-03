#include <stdio.h>

int main() {
    int maxCapacity, N;
    int arrivals;
    int i = 0;
    int treated = 0;
    int rejected = 0;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &arrivals);

        if (treated + arrivals <= maxCapacity) {
            treated += arrivals;        
        } else {
            rejected += (treated + arrivals - maxCapacity);  
            treated = maxCapacity;      
        }

        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}
