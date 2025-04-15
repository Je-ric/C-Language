#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int numbers[MAX_SIZE], i, size;
    int smallest_index, largest_index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    smallest_index = largest_index = 0;

    for (i = 1; i < size; i++) {
        if (numbers[i] < numbers[smallest_index]) {
            smallest_index = i;
        }
        if (numbers[i] > numbers[largest_index]) {
            largest_index = i;
        }
    }

    printf("The smallest element is %d, at position(s): ", numbers[smallest_index]);
    for (i = 0; i < size; i++) {
        if (numbers[i] == numbers[smallest_index]) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    printf("The largest element is %d, at position(s): ", numbers[largest_index]);
    for (i = 0; i < size; i++) {
        if (numbers[i] == numbers[largest_index]) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
