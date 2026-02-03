#include <stdio.h>

int main() {
    int fuel, N;
    int consumption;
    int i = 0;
    int completedTrips = 0;

   
    scanf("%d", &fuel);
    scanf("%d", &N);

    
    while (i < N) {
        scanf("%d", &consumption);

        if (fuel < consumption) {  
            break;
        }

        fuel -= consumption;       
        completedTrips++;          
        i++;
    }
    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
