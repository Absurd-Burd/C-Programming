#include <stdio.h>

int main() {
    int n, i, num, max, min;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (i == 1) {
            max = num;
            min = num;
        } else {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
    }

    printf("Largest number  = %d\n", max);
    printf("Smallest number = %d\n", min);

    return 0;
}
