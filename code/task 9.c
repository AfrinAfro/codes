#include <stdio.h>

int main() {
    int numbers[100], count = 0;

    printf("Enter numbers separated by spaces (press Enter when done):\n");

    while (scanf("%d", &numbers[count]) == 1) count++;

    printf("Original array: [");
    for (int i = 0; i < count; i++) printf("%d%s", numbers[i], i < count - 1 ? ", " : "]\n");

    int newCount = 0;
    for (int i = 0; i < count; i++) if (numbers[i] % 2 != 0) numbers[newCount++] = numbers[i];

    printf("Modified array: [");
    for (int i = 0; i < newCount; i++) printf("%d%s", numbers[i], i < newCount - 1 ? ", " : "]\n");

    return 0;
}

