#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.5;
    double c = 12.345;
    char d = 'A';

    printf("%d\n", a);
    printf("%.1f\n", b);
    printf("%.3lf\n", c);
    printf("%c", d);

    return 0;
}
