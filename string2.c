#include <stdio.h>

int main() {
    char password[100];
    int i, flag = 0;
    scanf("%s", password);
    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
