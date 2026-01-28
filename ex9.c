#include <stdio.h>

int main() {
    int roomType;
    char season;
    int tariff = 0;
    scanf("%d", &roomType);
    scanf(" %c", &season);   

    switch (roomType) {
        case 1:  
            if (season == 'A') {
                tariff = 2500;
            } else if (season == 'B') {
                tariff = 2000;
            }
            break;

        case 2:  
            if (season == 'C') {
                tariff = 4000;
            } else if (season == 'D') {
                tariff = 3000;
            }
            break;

        default:
            printf("Invalid Room Type");
            return 0;
    }

    printf("₹%d", tariff);

    return 0;
}
