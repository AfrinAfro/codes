#include <stdio.h>

int main() {
    int numbers[7], largest = 0, index = 0;

    printf("Enter 7 numbers separated by commas: ");
    for (int i = 0; i < 7; i++) {
        scanf("%d,", &numbers[i]);
        if (numbers[i] > largest) largest = numbers[i], index = i;
    }

    printf("My array: [");
    for (int i = 0; i < 7; i++) printf("%d%s", numbers[i], i < 6 ? ", " : "]\n");

    printf("Largest number in the array is %d which was found at index %d.\n", largest, index);

    return 0;
}

