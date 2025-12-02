#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    if (n <= 0) {
        return 0;
    }

    if (n >= 1) {
        printf("%d", a);
    }

    if (n >= 2) {
        printf(" %d", b);
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
