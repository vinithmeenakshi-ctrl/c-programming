#include <stdio.h>

int main() {
    int planType;
    int paymentMode;
    int amount = 0;

   
    scanf("%d", &planType);
    scanf("%d", &paymentMode);

    switch (planType) {
        case 1:
            amount = 199;
            break;

        case 2:
            amount = 399;
            break;

        default:
            printf("Invalid Plan");
            return 0;
    }

   
    switch (paymentMode) {
        case 11:   
        case 12:   
            amount = amount - 20;
            break;

        case 13:   
            
            break;

        default:
            printf("Invalid Payment Mode");
            return 0;
    }

    printf("Pay ₹%d", amount);

    return 0;
}
