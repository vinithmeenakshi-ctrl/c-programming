#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ' && str[0] != '\n'){
        count = 1;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            count++;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}

