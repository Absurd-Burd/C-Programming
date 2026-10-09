#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    char arr[size][100];

    printf("Enter %d strings:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("\nThe elements in your array are:\n");
    for (int i = 0; i < size; i++) {
        printf("Index %d: %s\n", i, arr[i]);
    }

    return 0;
}

