#include <stdio.h>

int main() {
    int array[100], target, size, i, j, sum;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    printf("Pairs that add up to %d:\n", target);
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] + array[j] == target) {
                printf("%d and %d\n", array[i], array[j]);
            }
        }
    }

    return 0;
}
