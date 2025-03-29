#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int choice, pos, len;
    
    printf("Enter a string: ");
    gets(str);
    
    do {
        printf("\n1. Delete\n2. Search\n3. Insert\n4. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter position and length of substring to delete: ");
                scanf("%d %d", &pos, &len);
                memmove(&str[pos-1], &str[pos+len-1], strlen(str)-pos+len);
                printf("Result: %s\n", str);
                break;
                
            case 2:
                printf("Enter substring to search: ");
                char search[MAX_LEN];
                scanf("%s", search);
                char *ptr = strstr(str, search);
                if (ptr != NULL) {
                    printf("Found at position %d\n", ptr-str+1);
                } else {
                    printf("Not found\n");
                }
                break;
                
            case 3:
                printf("Enter position and string to insert: ");
                scanf("%d %s", &pos, search);
                len = strlen(search);
                memmove(&str[pos+len-1], &str[pos-1], strlen(str)-pos+1);
                memcpy(&str[pos-1], search, len);
                printf("Result: %s\n", str);
                break;
                
            case 4:
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice. Please enter again.\n");
                break;
        }
    } while (choice != 4);
    
    return 0;
}
