//LAB A - GROUP 1
//1-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct contact{
	char name[50];
	char address[100];
	char phone[20];
	char email[50];
	};

struct contact contacts[100];
int num_contacts = 0;

void save_contacts() {
    FILE* file = fopen("C:/C/contacts.txt", "w");

    for (int i = 0; i < num_contacts; i++) {
	fprintf(file, "%s,%s,%s,%s\n", contacts[i].name, contacts[i].address, contacts[i].phone, contacts[i].email);
    }

    fclose(file);
}

void load_contacts() {
    FILE* file = fopen("C:/C/contacts.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char* name = strtok(line, ",");
        char* address = strtok(NULL, ",");
        char* phone = strtok(NULL, ",");
        char* email = strtok(NULL, "\n");

        struct contact new_contact;
        strcpy(new_contact.name, name);
        strcpy(new_contact.address, address);
        strcpy(new_contact.phone, phone);
        strcpy(new_contact.email, email);

        contacts[num_contacts] = new_contact;
        num_contacts++;
    }

    fclose(file);
}

void clrscr(){
	system("cls");
}

void header(){
	printf("--------------------------------------------------------------------------------");
	printf("%-16s\t%-13s\t%-11s\t%-24s", "Name", "Address", "Phone Number", "Email");
	printf("--------------------------------------------------------------------------------");
}

int check_duplicate(char* value) {
	for(int i=0; i<num_contacts; i++){
		if (strcmp(value, contacts[i].phone) == 0) {
			return 1;
		}
		if(strcmp(value, contacts[i].email) == 0) {
			return 2;
		}
	}
	return 0;
}

int valid_input(char* value){
	if(strlen(value) != 11){
		return 1;
	}
	for(int i=0; i<strlen(value); i++){
		if(value[i] < '0' || value[i] > '9') {
			return 2;
		}
	}
	return 0;
}


void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
	str[i] = tolower(str[i]);
    }
}

int containsSubstring(const char *str, const char *substring) {
    return strstr(str, substring) != NULL;
}

void add_contact() {
	system("cls");
	printf("\t\t\t\t * ADD CONTACT * \n\n");

	if (num_contacts >= 100) {
		printf("Error: Maximum number of contacts reached.\n");
		return;
	}

	struct contact new_contact;
	printf("Enter name: ");
	gets(new_contact.name);

	printf("Enter address: ");
	gets(new_contact.address);

	int duplicate, valid;
	do{
		printf("Enter phone number: ");
		scanf("%s", new_contact.phone);
		duplicate = check_duplicate(new_contact.phone);
		valid = valid_input(new_contact.phone);
		if(duplicate == 1){
			printf("The phone number is already in use. Please enter another one.\n");
		}
		else if(valid == 1){
			printf("Invalid phone number. Please enter 11 digits.\n");
		}
		else if(valid == 2){
			printf("Invalid input. Make sure to input your phone number.\n");
		}
	}while (duplicate == 1 || valid == 1 || valid == 2);

	do{
		printf("Enter email address: ");
		scanf("%s", new_contact.email);
		duplicate = check_duplicate(new_contact.email);
		if(duplicate == 2) {
			printf("A contact with the same email already exists!\n");
		}
	}while(duplicate == 2);

	contacts[num_contacts] = new_contact;

	num_contacts++;
	save_contacts();
	printf("Contact added successfully.\n");
}

void delete_contact() {
	again:
	system("cls");
	printf("\t\t\t\t* DELETE CONTACT * \n\n");

	int delete_by;
	printf("How do you want to delete?\n");
	printf("[1] Phone Number\n");
	printf("[2] Email Address\n");
	printf("[3] Back\n");
	printf("Option: ");
	scanf("%d",&delete_by);
	getchar();

	char delete_contact[50];
	int found_index = -1;

	if(delete_by == 1){
		printf("Enter phone number of contact to delete: ");
		gets(delete_contact);
		}
	else if(delete_by == 2){
		printf("Enter email address of contact to delete: ");
		gets(delete_contact);
	}
	else if(delete_by == 3){
			return;
		}
	else{ goto again; }

	for(int i = 0; i < num_contacts; i++) {
		if((delete_by == 1 && strcmp(contacts[i].phone, delete_contact) == 0)
		|| (delete_by == 2 && strcmp(contacts[i].email, delete_contact) == 0)){
		found_index = i;
		break;
		}
	}

	if(found_index != -1){
		confirm:
		clrscr();

		header();
		printf("%-16s\t%-13s\t%-11s\t%-24s\n", contacts[found_index].name, contacts[found_index].address, contacts[found_index].phone, contacts[found_index].email);
		printf("--------------------------------------------------------------------------------");

		printf("\nAre you sure you want to delete (Y/N)? ");
		char confirmation;
		scanf(" %c",&confirmation);
		if(confirmation == 'y' || confirmation == 'Y'){
			for (int i = found_index; i<num_contacts-1; i++){
				contacts[i] = contacts[i+1];
			}
			num_contacts--;
			save_contacts();
			clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t  Contact confirmed to delete!\n\n\n\n\n\n\n\n\n\n\n");
			printf("Press Enter to continue...");
			getchar(); getchar();
			clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t  Contact deleted successfully!\n\n\n\n\n\n\n\n\n\n\n");

		}
		else if(confirmation == 'n' || confirmation == 'N'){
			clrscr();
			getchar();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t  Contact deletion cancelled!\n\n\n\n\n\n\n\n\n\n\n");


		}
		else { goto confirm; }
	}

	if (found_index == -1) {
		clrscr();
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Error: Contact not found!\n\n\n\n\n\n\n\n\n\n\n");
		return;
	}
}


void view_contacts(){
	system("cls");
	printf("\t\t\t\t *VIEW CONTACT*\n\n");

	int size = 15;//palitan lang kung ilan per page
	int page=1;//current page
	int total_pages=(num_contacts+9)/size;
	int start_index=(page-1)*size;
	int end_index=start_index+size;

	while(1){
	system("cls");
	header();
	for(int i=start_index; i<end_index && i<num_contacts;i++){
		printf("%-16s\t%-13s\t%-11s\t\%-20s\n",contacts[i].name,contacts[i].address,contacts[i].phone,contacts[i].email);
	}
	printf("--------------------------------------------------------------------------------");
	printf("1.Next Page   2.Previous Pages   3.Back to Main Menu   *Enter your choice: ");
	int choice;
	scanf("%d",&choice);
	fflush(stdin);

	switch(choice){
		case 1://Next page
			if(page<total_pages){
				page++;
				start_index=(page-1)*size;
				end_index=start_index+size;
			}else{}
			break;
		case 2://Previous Page
			if(page>1){
			page--;
			start_index=(page-1)*size;
			end_index=start_index+size;
			}else{}
			break;
		case 3:
			return;
	}
	}


}

void search_contact(){
	again:
	system("cls");
	printf("\t\t\t\t * SEARCH CONTACT * \n\n");

	char search_contact[50];
	int search = 0;
	int search_by;
	printf("Would you like to search for the contact using?\n");
	printf("[1] Name\n");
	printf("[2] Address\n");
	printf("[3] Phone Number\n");
	printf("[4] Email Address\n");
	printf("[5] Back\n");
	printf("Option: ");
	scanf("%d",&search_by);
	getchar();

	if(search_by == 1){
		printf("Enter name of the contact to search: ");
		gets(search_contact);
		}
	else if(search_by == 2){
		printf("Enter address of the contact to search: ");
		gets(search_contact);
		}
	else if(search_by == 3){
		printf("Enter phone number of the contact to search: ");
		gets(search_contact);
		}
	else if(search_by == 4){
		printf("Enter email address of the contact to search: ");
		gets(search_contact);
		}
	else if(search_by == 5){
		return;
		}
	else{ goto again; }
	system("cls");
	toLower(search_contact);
	header();

for (int i = 0; i < num_contacts; i++) {
    char lowercase_name[50];
    strcpy(lowercase_name, contacts[i].name);
    toLower(lowercase_name);

    char lowercase_address[100];
    strcpy(lowercase_address, contacts[i].address);
    toLower(lowercase_address);

    if (search_by == 1 && containsSubstring(lowercase_name, search_contact)
    || search_by == 2 && containsSubstring(lowercase_address, search_contact)
    || search_by == 3 && containsSubstring(contacts[i].phone, search_contact)
    || search_by == 4 && containsSubstring(contacts[i].email, search_contact)) {
	printf("%-16s\t%-13s\t%-11s\t%-24s", contacts[i].name, contacts[i].address, contacts[i].phone, contacts[i].email);
	search = 1;
    }
}
	printf("--------------------------------------------------------------------------------");

	if(search == 0){
		clrscr();
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tNo Contact Found!\n\n\n\n\n\n\n\n\n\n\n");
	}

}


void edit_contacts(){
	int edit_by;
	char search_edit[50];

	do{
		system("cls");
		printf("\t\t\t\t * EDIT CONTACT * \n\n");

		printf("How do you want to search the contact you want to edit?\n");
		printf("[1] By Phone\n");
		printf("[2] By Email\n");
		printf("[3] Back\n");
		printf("Select: ");
		scanf("%d",&edit_by);
		getchar();

		if(edit_by == 1){
			printf("Enter phone of contact to edit: ");
			gets(search_edit);
		}
		else if(edit_by == 2){
			printf("Enter email of contact to edit: ");
			gets(search_edit);
		}
		else if(edit_by == 3){
			return;
		}
	}while(edit_by < 1 || edit_by > 3);

	int found_index = -1;
	for(int i = 0; i < num_contacts; i++){
		if(edit_by == 1 && strcmp(contacts[i].phone, search_edit) == 0
		|| edit_by == 2 && strcmp(contacts[i].email, search_edit) == 0){
			found_index = i;
			break;
		}
	}

	if(found_index == -1){
		printf("\n\n\n\n\n\t\t\t  Error: Contact not found!\n\n\n\n\n\n\n\n\n\n\n");
		return;
	}

	struct contact updated_contact = contacts[found_index];
	int choice;
	int duplicate, valid;
	do{
		clrscr();
		header();
		printf("%-16s\t%-13s\t%-11s\t\%-24s\n",updated_contact.name,updated_contact.address,updated_contact.phone,updated_contact.email);
		printf("--------------------------------------------------------------------------------");

		printf("\nWhat would you like to edit?\n");
		printf("[1] Name\n");
		printf("[2] Address\n");
		printf("[3] Phone Number\n");
		printf("[4] Email Address\n");
		printf("[5] Back\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
	}while((getchar()) != '\n'|| choice < 1 || choice > 5);

	switch(choice){
	case 1:
		printf("Enter new name: ");
		gets(updated_contact.name);
		break;
	case 2:
		printf("Enter new address: ");
		gets(updated_contact.address);
		break;
	case 3:
		do{
			printf("Enter new phone number: ");
			gets(updated_contact.phone);
			duplicate = check_duplicate(updated_contact.phone);
			valid = valid_input(updated_contact.phone);
			if(duplicate == 1){
				printf("The phone number is already in use. Please enter another one.\n");
			}
			else if(valid == 1){
				printf("Invalid phone number. Please enter 11 digits.\n");
			}
			else if(valid == 2){
				printf("Invalid input. Make sure to input your phone number.\n");
			}
		}while(duplicate == 1 || valid == 1 || valid == 2);
		break;
	case 4:
		do{
			printf("Enter new email address: ");
			scanf("%s", updated_contact.email);
			duplicate = check_duplicate(updated_contact.email);
			if(duplicate == 2){
				printf("A contact with the same email already exists!\n");
			}
		}while(duplicate == 2);
			break;
	case 5:
			return;
	}

	char confirm;
	again:
	printf("Do you want to save the changes? (Y/N): ");
	scanf(" %c", &confirm);

	if(confirm == 'Y' || confirm == 'y'){
		clrscr();
		getchar();
		contacts[found_index] = updated_contact;
		save_contacts();
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t      Contact details updated successfully!\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(confirm == 'N' || confirm == 'n'){
		clrscr();
		getchar();
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tChanges discarded!\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else { goto again; }

}




int main(){
	int choice;
	load_contacts();
	do{
	system("cls");
	printf("--------------------------------------------------------------------------------=");
	printf("\t\t\t* ADDRESS BOOK INFORMATION SYSTEM *\t\t       =");
	printf("--------------------------------------------------------------------------------");
	printf("=\t\t\t\t\t\t\t\t\t       =");
	printf("=\t\t\t   [1] Add a new contact       \t\t\t       ==");
	printf("\t\t\t   [2] Delete a contact\t\t\t\t       ==");
	printf("\t\t\t   [3] Search for a contact    \t\t\t       ==");
	printf("\t\t\t   [4] View all contacts       \t\t\t       ==");
	printf("\t\t\t   [5] Edit contacts       \t\t\t       ==");
	printf("\t\t\t   [6] Exit    \t\t\t\t\t       ==");
	printf("         \t\t\t\t\t\t\t\t       ==");
	printf("================================================================================");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("        \t\t\t\t\t\t\t\t       ==");
	printf("\t\tEnter your choice: ");
	scanf("%d", &choice);
	while((getchar()) != '\n');

	switch(choice){
	case 1:
		add_contact();
		break;
	case 2:
		delete_contact();
		break;
	case 3:
		search_contact();
		break;
	case 4:
		view_contacts();
		break;
	case 5:
		edit_contacts();
		break;
	case 6:
		printf("Exiting...\n");
		break;
	default:
		printf("Invalid choice. Please try again.\n");
		break;
	}

	printf("Press Enter to continue...");
	getchar();
	}while (choice != 6);

	return 0;
}