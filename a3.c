#include <stdio.h>
int main() {
    int a, b;

    // Assignment
    scanf("%d", &a);
    printf("%d\n", a);

    // +=
    scanf("%d %d", &a, &b);
    a += b;
    printf("%d\n", a);

    // -=
    scanf("%d %d", &a, &b);
    a -= b;
    printf("%d\n", a);

    // *=
    scanf("%d %d", &a, &b);
    a *= b;
    printf("%d\n", a);

    // /= and %=
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);

    return 0;
}
