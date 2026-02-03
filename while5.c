#include <stdio.h>

int main() {
    int N;
    int order;
    int i = 0;
    int success = 0;
    int cancelled = 0;

 
    scanf("%d", &N);

 
    while (i < N) {
        scanf("%d", &order);

        if (order == 1) {
            success++;
        } else {
            cancelled++;
        }

        i++;
    }

   
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > success) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}
