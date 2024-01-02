#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7};
    int array2[] = {3, 5, 1, 6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Given array 1: [1, 2, 3, 4, 5, 6, 7]\n");
    printf("Sample Output 1: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", array1[i] * array1[i]);
        if (i < size1 - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Given array 2: [3, 5, 1, 6]\n");
    printf("Sample Output 2: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", array2[i] * array2[i]);
        if (i < size2 - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

