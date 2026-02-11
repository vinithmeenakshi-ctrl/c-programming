#include <stdio.h>

int main() {
    char address[200];
    int i, count = 0;
    fgets(address, sizeof(address), stdin);
    for (i = 0; address[i] != '\0'; i++) {
        if (address[i] == ' ') {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
