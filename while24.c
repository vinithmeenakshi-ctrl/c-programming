#include <stdio.h>

int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int burn;
    int i = 0;
    int emergencyStage = -1;
    int remainingFuel = fuel;

    while (i < N) {
        scanf("%d", &burn);
        remainingFuel -= burn;

        if (remainingFuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1; 
        }

        i++;
    }

    if (emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d\n", -remainingFuel); 
    }

    return 0;
}
