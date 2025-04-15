#include <stdio.h>
#include <conio.h>

int main() {
	clrscr();
    int arr[100], i, j, n, option, val, pos, count;

    printf("Enter the number of integers you want to store in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    do {
	printf("\n\nSelect an option:\n");
	printf("1. Delete a selected integer\n");
	printf("2. Delete duplicate integers\n");
	printf("3. Search for an integer\n");
	printf("4. Insert a new integer\n");
	printf("5. Exit\n");
	scanf("%d", &option);

	switch(option) {
	    case 1:
		printf("\nEnter the integer you want to delete: ");
		scanf("%d", &val);

		count = 0;
		for (i = 0; i < n; i++) {
		    if (arr[i] == val) {
			count++;
			for (j = i; j < n - 1; j++) {
			    arr[j] = arr[j + 1];
			}
			n--;
		    }
		}

		if (count == 0) {
		    printf("\n%d is not present in the array.\n", val);
		} else {
		    printf("\n%d occurrences of %d have been deleted from the array.\n", count, val);
		}

		break;
	    case 2:
		count = 0;
		for (i = 0; i < n; i++) {
		    for (j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
			    count++;
			    for (pos = j; pos < n - 1; pos++) {
				arr[pos] = arr[pos + 1];
			    }
			    n--;
			}
		    }
		}

		if (count == 0) {
		    printf("\nThere are no duplicate integers in the array.\n");
		} else {
		    printf("\n%d duplicate integers have been deleted from the array.\n", count);
		}

		break;
	    case 3:
 
		printf("\nEnter the integer you want to search for: ");
		scanf("%d", &val);
   int count;

for (i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("%d ", i);
            count = 1 ;
         }  
    }

if(!count){
printf("\n%d is not present in the array.\n", val);
}
	break;
	    case 4:
		printf("\nEnter the position where you want to insert the new integer (1-%d): ", n + 1);
		scanf("%d", &pos);

		if (n == MAX_SIZE) {
                    printf("\nArray is full! No more elements can be inserted.\n");
                } else {
                    // Move all elements after the insertion point to the right by one position
                    for (i = n - 1; i >= pos - 1; i--) {
                        arr[i + 1] = arr[i];
                    }
                    // Insert the new element at the desired position
                    scanf("%d", &val);
                    arr[pos - 1] = val;
                    n++;
                    printf("\n%d has been inserted at position %d.\n", val, pos);
                }

            break;
	case 5:
            printf("\nExiting the program...\n");
            break;
        default:
            printf("\nInvalid option. Please try again.\n");
            break;
    }
} while (option != 5);

return 0; 
}




