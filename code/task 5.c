#include <stdio.h>

int main() {
    char *given_array[] = {"hey", "there", "", "what's", "", "up", "", "?"};
    char *modified_array[10];
    int modified_count = 0;

    for (int i = 0; i < 8; i++)
        if (given_array[i][0] != '\0') modified_array[modified_count++] = given_array[i];

    printf("Original Array: ['hey', 'there', '', 'what's', '', 'up', '', '?']\n");
    printf("Modified Array: [");
    for (int i = 0; i < modified_count; i++)
        printf("'%s'%s", modified_array[i], i < modified_count - 1 ? ", " : "]\n");

    return 0;
}
