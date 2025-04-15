#include <stdio.h>

int main() {
    int arr[50];
    int i, j, count, size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    printf("Enter the elements of array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < size; i++) {
        count = 0; // Reset count for each element
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        printf("%d comes %dx\n", arr[i], count);
    }
    
    return 0;
}
