#include <stdio.h>

int main() {
    int dataPackGB, N;
    int usage;
    int i = 0;
    int exhaustedDay = -1;  
    int overused = 0;
    scanf("%d", &dataPackGB);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &usage);
        dataPackGB -= usage;

        if (dataPackGB < 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1;      
            overused = -dataPackGB;   
        }

        i++;
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}
