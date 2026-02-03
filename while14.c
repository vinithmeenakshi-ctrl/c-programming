#include <stdio.h>

int main() {
    int ATMcash, N;
    int withdrawal;
    int i = 0;
    int successful = 0;
    scanf("%d", &ATMcash);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &withdrawal);

        if (ATMcash >= withdrawal) {  
            ATMcash -= withdrawal;
            successful++;
        } else {                       
            break;
        }

        i++;
    }
    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d\n", ATMcash);

    return 0;
}
