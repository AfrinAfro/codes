#include <stdio.h>

int main() {
    int array_one[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_two[] = {10, 11, 12, -13, -14, -15, -16};
    int even_elements[100], even_count = 0;

    for (int i = 0; i < sizeof(array_one) / sizeof(array_one[0]); i++)
        if (array_one[i] % 2 == 0) even_elements[even_count++] = array_one[i];

    for (int i = 0; i < sizeof(array_two) / sizeof(array_two[0]); i++)
        if (array_two[i] % 2 == 0) even_elements[even_count++] = array_two[i];

    printf("Output: [");
    for (int i = 0; i < even_count; i++)
        printf("%d%s", even_elements[i], i < even_count - 1 ? ", " : "]\n");

    return 0;
}

