#include <stdio.h>

int main() {
    int walletBalance, N;
    int purchase;
    int i = 0;
    int successful = 0;
    scanf("%d", &walletBalance);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &purchase);

        if (walletBalance >= purchase) {
            walletBalance -= purchase;   
            successful++;                
        } else {
            break;                       
        }

        i++;
    }
    printf("Successful Purchases: %d\n", successful);
    printf("Final Balance: %d\n", walletBalance);

    return 0;
}
