#include <stdio.h>

int main() {
    int mode;
    char category;
    int fee = 0;
    scanf("%d", &mode);
    scanf(" %c", &category); 

    switch (mode) {
        case 1: 
            switch (category) {
                case 'R':
                    fee = 5000;
                    break;
                case 'S':
                    fee = 3000;
                    break;
                default:
                    printf("Invalid Category");
                    return 0;
            }
            break;

        case 2:
            switch (category) {
                case 'R':
                    fee = 9000;
                    break;
                case 'S':
                    fee = 7000;
                    break;
                default:
                    printf("Invalid Category");
                    return 0;
            }
            break;

        default:
            printf("Invalid Mode");
            return 0;
    }

    printf("₹%d", fee);

    return 0;
}
