#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char line[1000];
    int a[1000];

    while (fgets(line, sizeof(line), stdin)) {
        int n = 0;
        char *p = strtok(line, " \t\n");

        if (p == NULL)
            continue;

        if (atoi(p) == -9999)
            break;

        while (p != NULL) {
            a[n++] = atoi(p);
            p = strtok(NULL, " \t\n");
        }

        for (int i = n - 1; i >= 0; i--) {
            printf("%d", a[i]);

            if (i > 0)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}