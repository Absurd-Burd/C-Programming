
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", (int)pow(j, i));
        }
        printf("\n");
    }

    return 0;
}
