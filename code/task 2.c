#include <stdio.h>

int main()
{
    int inputArray[100], newArray[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 4) {
        printf("Not possible\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &inputArray[i]);

    printf("Original array: [%d", inputArray[0]);
    for (int i = 1; i < n; i++) printf(", %d", inputArray[i]);
    printf("]\n");

    int newSize = n - 4;
    printf("New array: [%d", inputArray[2]);
    for (int i = 3; i < n - 2; i++) printf(", %d", inputArray[i]);
    printf("]\n");

    return 0;
}

