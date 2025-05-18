#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10
#define MAX_NAME 50

int main()
{
    char names[MAX_ITEMS][MAX_NAME];
    int quantities[MAX_ITEMS];
    float prices[MAX_ITEMS];
    int count = 0;
    int choice, i, item_id;

    printf("SIMPLE INVENTORY MANAGEMENT\\n");

menu:
    printf("\\nINVENTORY MENU\\n");
    printf("1. Add Item\\n");
    printf("2. View All Items\\n");
    printf("3. Update Item\\n");
    printf("4. Delete Item\\n");
    printf("5. Exit\\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Add Item
        if (count < MAX_ITEMS)
        {
            printf("Enter item name: ");
            scanf(" %[^\\n]", names[count]);
            printf("Enter quantity: ");
            scanf("%d", &quantities[count]);
            printf("Enter price: $");
            scanf("%f", &prices[count]);
            count++;
            printf("Item added successfully!\\n");
        }
        else
        {
            printf("Inventory full!\\n");
        }
        goto menu;

    case 2: // View All Items
        if (count == 0)
        {
            printf("Inventory is empty!\\n");
        }
        else
        {
            printf("\\nINVENTORY LIST:\\n");
            printf("ID\\tName\\t\\tQuantity\\tPrice\\n");
            for (i = 0; i < count; i++)
            {
                printf("%d\\t%s\\t\\t%d\\t\\t$%.2f\\n",
                       i + 1, names[i], quantities[i], prices[i]);
            }
        }
        goto menu;

    case 3: // Update Item
        if (count == 0)
        {
            printf("Inventory is empty!\\n");
        }
        else
        {
            printf("Enter item ID to update: ");
            scanf("%d", &item_id);

            if (item_id < 1 || item_id > count)
            {
                printf("Invalid item ID!\\n");
            }
            else
            {
                printf("Enter new quantity: ");
                scanf("%d", &quantities[item_id - 1]);
                printf("Enter new price: $");
                scanf("%f", &prices[item_id - 1]);
                printf("Item updated successfully!\\n");
            }
        }
        goto menu;

    case 4: // Delete Item
        if (count == 0)
        {
            printf("Inventory is empty!\\n");
        }
        else
        {
            printf("Enter item ID to delete: ");
            scanf("%d", &item_id);

            if (item_id < 1 || item_id > count)
            {
                printf("Invalid item ID!\\n");
            }
            else
            {
                // Shift items to fill the gap
                for (i = item_id - 1; i < count - 1; i++)
                {
                    strcpy(names[i], names[i + 1]);
                    quantities[i] = quantities[i + 1];
                    prices[i] = prices[i + 1];
                }
                count--;
                printf("Item deleted successfully!\\n");
            }
        }
        goto menu;

    case 5: // Exit
        printf("Exiting program. Goodbye!\\n");
        break;

    default:
        printf("Invalid choice!\\n");
        goto menu;
    }

    return 0;
}