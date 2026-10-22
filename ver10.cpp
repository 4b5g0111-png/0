#include <stdio.h>

int main(void) {
    int n;
    int b = 0, s = 0;
    int max, min;
    int first = 1;

    while (1) {
        scanf("%d", &n);
        if (n == -9999) {
            break;
        }

        if (first) {
            max = min = n;
            first = 0;
        } else {
            if (n > max) max = n;
            if (n < min) min = n;
        }

        if (n >= 0) {
            b++;
        } else {
            s++;
        }
    }

    printf("%d %d %d %d\n", max, min, b, s);

    return 0;
}