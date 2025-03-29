#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Item{
    int id;
    char name[50];
    float price;
    int quantity;
};

struct Stack{
    Item items[30];
    int top;
};

void top_value(Stack *stack){
    stack->top = -1;
}

void push(Stack *stack) {
    if(stack->top == 100 - 1){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tStack is full. Cannot add item.\n");
	getchar();
	return;
    }
    else{
	system("cls");
	printf("\n\n\t\t        * * * * *  ADD ITEM  * * * * * *\n");
	Item item;
	printf("\n\t\tEnter item ID: ");
	scanf("%d", &item.id);

	for (int i = stack->top; i >= 0; i--){
		if(stack->items[i].id == item.id){
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\tItem with ID %d already exists! Cannot add item!\n\n\n\n\n\n\n\n\n", item.id);
			getchar();
			return;
		}
	}
	printf("\n\t\tEnter item name: ");
	scanf(" %s", item.name);
	printf("\n\t\tEnter item quantity: ");
	scanf("%d", &item.quantity);
	printf("\n\t\tEnter item price: ");
	scanf("%f", &item.price);

	stack->items[++stack->top] = item;
	printf("\n\n\t\t\tItem added successfully.\n\n");
	getchar();
	return;
    }
}

void pop(Stack *stack) {
    if(stack->top == -1){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tStack is empty. Cannot delete item.\n\n\n\n\n\n\n\n\n\n");
	getchar();
	return;
    }
    else{
	system("cls");
	printf("\n\n\t\t        * * * * *  DELETE ITEM  * * * * * *\n");
	Item delete_item = stack->items[stack->top];
	printf("\n\t\tItem to delete:\n");
	printf("\t\t * ID: %d\n", delete_item.id);
	printf("\t\t * Name: %s\n", delete_item.name);
	printf("\t\t * Quantity: %d\n", delete_item.quantity);
	printf("\t\t * Price: %.2f\n", delete_item.price);

	printf("\n\t\tAre you sure you want to delete this item? (Y/N): ");
	char confirmation;
	scanf(" %c", &confirmation);

	if(confirmation == 'Y' || confirmation == 'y') {
		stack->top--;
		printf("\n\t\t\tItem deleted successfully.\n");
	}
	else{
		printf("\n\t\t\tItem deletion canceled.\n");
	}
	getchar();
	return;
    }
}

void display(Stack *stack) {
    if(stack->top == -1) {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tInventory is empty.\n\n\n\n\n\n\n\n\n\n");
	getchar();
	return;
    }
    system("cls");
    printf("\n\n\t\t         * * * * *  Inventory  * * * * *\n\n");
    printf("--------------------------------------------------------------------------------");
    printf("     %-15s\t%-20s\t%-10s\t%-16s", "ID", "Name", "Quantity", "Price");
    printf("--------------------------------------------------------------------------------");
    for (int i = stack->top; i >= 0; i--) {
	Item item = stack->items[i];
	printf("     %-15d\t%-20s\t%-10d\t%-16.2lf", item.id, item.name, item.quantity, item.price);
    }
    printf("--------------------------------------------------------------------------------\n\n");
}

int main(){
    system("cls");
    Stack inventory;
    top_value(&inventory);

    int choice;
    do{
	system("cls");
	printf("\n\n\t\t\t * DDS Inventory System * \n\n");
	printf("\t\t\t[1] Add item\n");
	printf("\t\t\t[2] Delete item\n");
	printf("\t\t\t[3] Display inventory\n");
	printf("\t\t\t[4] Exit\n\n");
	printf("\t\t\tEnter your choice: ");
	scanf("%d", &choice);
	while((getchar()) != '\n');

	switch(choice){
	    case 1:
		push(&inventory);
		break;
	    case 2:
		pop(&inventory);
		break;
	    case 3:
		display(&inventory);
		break;
	    case 4:
		printf("\t\t\tExiting...\n");
		break;
            default:
                printf("\t\tInvalid choice. Please try again.\n");
                break;
        }
        printf("\t\t\tPress Enter to continue...");
        getchar();
    }while(choice != 4);

    return 0;
}
