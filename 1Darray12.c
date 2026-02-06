#include <stdio.h>

int main() {
    int n, target;
    

    scanf("%d", &n);
    
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (prices[i] + prices[j] == target) {
                printf("%d %d", prices[i], prices[j]);
                return 0; 
            }
        }
    }
    printf("No pair");
    
    return 0;
}
