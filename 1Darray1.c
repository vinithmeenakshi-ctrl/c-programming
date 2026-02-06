#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int salary;
    int max = INT_MIN,
    second = INT_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d", &salary);

        if (salary > max) {
            second = max;
            max = salary;
        }
        else if (salary < max && salary > second) {
            second = salary;
        }
    }

    if (second == INT_MIN) {
        printf("No second highest salary\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
