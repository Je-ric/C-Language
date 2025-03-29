#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Concert {
    char name[50];
    char date[30];
    char time[20];
    char place[50];
    char seatPlans[30][100];
    int numSeatPlans;
    float prices[30];
    int quantities[50];
};

struct User {
    char name[50];
    char address[50];
    int age;
    char phone[20];
    char email[50];
    char username[20];
    char password[20];
};

struct Reservation {
	char name[50];
    char date[30];
    char time[20];
    char place[50];
    int userId;
    int concertId;
    int seatPlanIndex;
    int quantity;
    float ticketPrice;
    float totalPrice;
};

struct Concert concerts[10];
int numConcerts = 0;

struct User users[50];
int numUsers = 0;

struct Reservation reservations[50];
int numReservations = 0;

int loggedInUserId = -1;
int isAdmin = 0;

void userMenu1();
void userMenu2();
void adminMenu();
void signUp();
void UserlogIn();
void AdminlogIn();
void AdmindisplayConcerts();
void UserdisplayConcerts();
void addConcert();
void manageUserAccounts();
void manageAccountInformation();
void reserveTicket();
void deleteReservation();
void manageReservations();
void paymentConfirmation();

void loadConcerts();
void saveConcerts();
void loadUsers();
void saveUsers();
void loadReservations();
void saveReservations();

int valid_input();
int valid_pin();
int check_duplicate();

int main() {
    loadConcerts();
loadUsers();
loadReservations();
    int choice;
    while (1) {
	system("cls");
	printf("\n----- Main Menu -----\n");
	printf("1. User Menu\n");
	printf("2. Admin Menu\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		    userMenu1();
		    break;
	    case 2:
		AdminlogIn();
		break;
	    case 3:
		printf("Exiting...\n");
        saveConcerts();
        saveUsers();
        saveReservations();
	    system("pause");
		return 0;
	    default:
		printf("Invalid choice! Try again.\n");
		system("pause");
		break;
	}
    }
}



int check_duplicate(char* value) {
    for (int i = 0; i < numUsers; i++) {
	if (strcmp(value, users[i].phone) == 0) {
	    return 1;
	}
	if (strcmp(value, users[i].email) == 0) {
	    return 2;
	}
	if (strcmp(value, users[i].username) == 0){
	    return 3;
	}
    }
    return 0;
}

int valid_pin(char* value) {
    if (strlen(value) != 6) {
	return 1;
    }
    for (int i = 0; i < strlen(value); i++) {
	if (value[i] < '0' || value[i] > '9') {
	    return 2;
	}
    }
    return 0;
}

int valid_input(char* value) {
    if (strlen(value) != 11) {
	return 1;
    }
    for (int i = 0; i < strlen(value); i++) {
	if (value[i] < '0' || value[i] > '9') {
	    return 2;
	}
    }
    return 0;
}


void userMenu1() {
    int choice;
    do{
    	system("cls");
    printf("\n----- User Menu -----\n");
    printf("1. Sign Up\n");
    printf("2. Log In\n");
    printf("3. Back\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
	case 1:
	    signUp();
	    userMenu1();
	    break;
	case 2:
	    UserlogIn();
	    break;
	case 3:
	    printf("Going back to the main menu...\n");
	    system("pause");
		break;
	default:
	    printf("Invalid choice! Try again.\n");
	    system("pause");
	    userMenu1();
	    break;
    }
    }while(choice != 3);
}

void userMenu2() {
	system("cls");
    int choice;

    do{
    	system("cls");
	printf("\n----- User Menu -----\n");
	printf("1. Display Concerts\n");
	printf("2. Reserve Ticket\n");
	printf("3. Manage Reservations\n");
	printf("4. Manage Account\n");
	printf("5. Logout\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		UserdisplayConcerts();
		break;
	    case 2:
		reserveTicket();
		break;
	    case 3:
		manageReservations();
		break;
	    case 4:
		manageAccountInformation();
		break;
	    case 5:
		loggedInUserId = -1;
		isAdmin = 0;
		return;
	    default:
		printf("Invalid choice! Please try again.\n");
		system("pause");
	}
    }while(choice != 5);
}

void adminMenu() {

    int choice;
    do {
    	system("cls");
	printf("\n----- Admin Menu -----\n");
	printf("1. Display Concerts\n");
	printf("2. Add Concert\n");
	printf("3. Manage User Accounts\n");
	printf("4. Logout\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		AdmindisplayConcerts();
		break;
	    case 2:
		addConcert();
		break;
	    case 3:
		manageUserAccounts();
		break;
	    case 4:
		loggedInUserId = -1;
		isAdmin = 0;
		return;
	    default:
		printf("Invalid choice! Please try again.\n");
		system("pause");
	}
    } while (choice != 4);
}


void signUp() {
	system("cls");
    printf("\n----- Sign Up -----\n");

    if (numUsers == 100) {
	printf("Maximum user capacity reached. Cannot create new accounts.\n");
	return;
    }
    int duplicate, valid;
    struct User newUser;

printf("\nSet desired username: ");
    getchar();
    fgets(newUser.username, sizeof(newUser.username), stdin);
    newUser.username[strcspn(newUser.username, "\n")] = '\0';

    duplicate = check_duplicate(newUser.username);
    if (duplicate == 3) {
	printf("\tUsername already exists!\n");
	return;
    }

	do{
		printf("Set desired 6-digit pin: ");
		gets(newUser.password);
		valid = valid_pin(newUser.password);
		if(valid == 1){
			printf("\tInvalid password! Please enter 6-digit pin\n");
		}
		if(valid == 2) {
			printf("\tMake sure to use number only\n");
		}
	}while(valid == 1 || valid == 2);

    printf("Enter your name: ");
    gets(newUser.name);

    printf("Enter your address: ");
    gets(newUser.address);

	do{
		printf("Enter your age: ");
		scanf("%d",&newUser.age);
		getchar();
		if(newUser.age < 18){
			printf("\tUser must be 18 years old above!\n");
		}
	}while(newUser.age < 18);

    do{
		printf("Enter your phone number: ");
		gets(newUser.phone);
		duplicate = check_duplicate(newUser.phone);
		valid = valid_input(newUser.phone);
		if(duplicate == 1) {
			printf("\tThe phone number is already in use. Please enter another one.\n");
		}
		else if(valid == 1) {
			printf("\tInvalid phone number. Please enter 11 digits.\n");
		}
		else if (valid == 2) {
			printf("\tInvalid input. Make sure to input your phone number.\n");
		}
	}while(duplicate == 1 || valid == 1 || valid == 2);

	do{
		printf("Enter your email address: ");
		gets(newUser.email);
		duplicate = check_duplicate(newUser.email);
		if(duplicate == 2) {
			printf("\tA reservation with the same email already exists!\n");
		}
	}while(duplicate == 2);

    users[numUsers++] = newUser;
    saveUsers();
    printf("Account created successfully!\n");
    system("pause");
}

void UserlogIn() {
	system("cls");
    printf("\n----- User Login -----\n");

    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < numUsers; i++) {
	if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
	    loggedInUserId = i;
	    isAdmin = 0;
	    printf("Login successful!\n");
		system("pause");
		userMenu2();
	}
    }

    printf("Invalid username or password! Please try again.\n");
    system("pause");
}

void AdminlogIn() {
	system("cls");
    printf("\n----- Admin Login -----\n");

    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
	loggedInUserId = -1;
	isAdmin = 1;
	printf("Login successful!\n");
	system("pause");
	adminMenu();
    } else {
	printf("Invalid username or password! Please try again.\n");
	system("pause");
    }
}

void manageAccountInformation() {
    system("cls");
    printf("\n----- Manage Account Information -----\n");

    if (loggedInUserId == -1) {
        printf("No user is currently logged in!\n");
        system("pause");
        return;
    }
	char option;
    struct User* currentUser = &users[loggedInUserId];
	do{
    printf("Username: %s\n", currentUser->username);
    printf("Password: %s\n", currentUser->password);
    printf("\nName: %s\n", currentUser->name);
    printf("Address: %s\n", currentUser->address);
    printf("Age: %d\n", currentUser->age);
    printf("Phone: %s\n", currentUser->phone);
    printf("Email: %s\n", currentUser->email);

    printf("\n=================================================\n");
    printf("[U] Update Account Information\n");
    printf("[D] Delete Account\n");
    printf("[B] Back\n");
    printf("Option: ");

    
    scanf(" %c", &option);

    switch (option) {
        case 'U':
        case 'u':{
        	int changesMade = 0; // Flag to track if any changes were made
    char tempAge[50]; // Temporary variable to store the updated information
    char temp[50];
    while (1) {
	printf("\nSelect the information you want to update:\n");
	printf("1. Name\n");
	printf("2. Address\n");
	printf("3. Age\n");
	printf("4. Phone\n");
	printf("5. Email\n");
	printf("6. Username\n");
	printf("0. Done\n");

	int updateChoice;
	scanf("%d", &updateChoice);

	if (updateChoice == 0) {
	    if (changesMade) {
		printf("\n----- Changes Summary -----\n");
		printf("Name: %s -> %s\n", currentUser->name, temp);
		printf("Address: %s -> %s\n", currentUser->address, temp);
		printf("Age: %d -> %d\n", currentUser->age, atoi(tempAge));
		printf("Phone: %s -> %s\n", currentUser->phone, temp);
		printf("Email: %s -> %s\n", currentUser->email, temp);
		printf("Username: %s -> %s\n", currentUser->username, temp);

		printf("\nDo you want to save the changes? (Yes/No): ");
		char choice[10];
		scanf("%s", choice);

		if (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0) {
		    strcpy(currentUser->name, temp);
		    strcpy(currentUser->address, temp);
		    currentUser->age = atoi(tempAge);
		    strcpy(currentUser->phone, temp);
		    strcpy(currentUser->email, temp);
		    strcpy(currentUser->username, temp);
		    printf("Changes saved successfully!\n");
		} else {
		    printf("Changes discarded.\n");
		}
	    } else {
		printf("No changes made.\n");
	    }

	    break;
	}

	switch (updateChoice) {
	    case 1:
		printf("Enter the new name: ");
		getchar(); // Remove newline character
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		printf("Before: %s\n", currentUser->name);
		printf("After: %s\n", temp);
		changesMade = 1;
		break;
	    case 2:
		printf("Enter the new address: ");
		getchar(); // Remove newline character
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		printf("Before: %s\n", currentUser->address);
		printf("After: %s\n", temp);
		changesMade = 1;
		break;
	    case 3:
		printf("Enter the new age: ");
		scanf("%d", &tempAge);
		printf("Before: %d\n", currentUser->age);
		printf("After: %d\n", tempAge);
		changesMade = 1;
		break;
	    case 4:
		printf("Enter the new phone number: ");
		getchar(); // Remove newline character
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		printf("Before: %s\n", currentUser->phone);
		printf("After: %s\n", temp);
		changesMade = 1;
		break;
	    case 5:
		printf("Enter the new email: ");
		getchar(); // Remove newline character
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		printf("Before: %s\n", currentUser->email);
		printf("After: %s\n", temp);
		changesMade = 1;
		break;
	    case 6:
		printf("Enter the new username: ");
		getchar(); // Remove newline character
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		printf("Before: %s\n", currentUser->username);
		printf("After: %s\n", temp);
		changesMade = 1;
		break;
	    default:
		printf("Invalid choice! Please try again.\n");
	}
    }
            break;
			}
        case 'D':
        case 'd':{
            again:
	system("cls");
    printf("\n----- Delete Account -----\n");

    if (loggedInUserId == -1) {
	printf("No user is currently logged in!\n");
	return;
    }
    char confirmation;
    printf("Are you sure you want to delete this account and associated reservations? (Y/N): ");
    scanf(" %c", &confirmation);

    if (confirmation == 'Y' || confirmation == 'y') {
	for (int i = loggedInUserId; i < numUsers - 1; i++) {
		users[i] = users[i + 1];
		numUsers--;
	for (int i = 0; i < numReservations; i++) {
	    for (int j = i; j < numReservations - 1; j++) {
		reservations[j] = reservations[j + 1];
	    }
	    numReservations--;
	    i--; // Decrement i to recheck the current index
	}
	loggedInUserId = -1;
	isAdmin = 0;
	saveUsers();
	printf("Account and associated reservations deleted successfully!\n");
	saveUsers();
	saveReservations();
	}
    }
    else if(confirmation == 'N' || confirmation == 'n'){
		printf("Acccount Deletion Cancelled");
		return;
	}
    else{ goto again; }
            break;
}
        case 'B':
        case 'b':
            printf("Going back to the user menu...\n");
            system("pause");
            break;

        default:
            printf("Invalid option! Please try again.\n");
            system("pause");
            manageAccountInformation();
            break;
    }
}while(option != 'B' && option != 'b');
}

void AdmindisplayConcerts() {
    system("cls");
    if (numConcerts == 0) {
        printf("No concerts available.\n");
        system("pause");
        return;
    }

    int option;
    do {
        system("cls");
        printf("==============================================================\n");
        printf(" No.          Concert          \n");
        printf("==============================================================\n");

        for (int i = 0; i < numConcerts; i++) {
            printf(" [%d]   %23s\n", i + 1, concerts[i].name);
        }

        printf("==============================================================\n");
        printf(" [V]   View Concert Details\n");
        printf(" [Q]   View Quantities Left\n");
        printf(" [R]   View Concert Reservations\n");
        printf(" [D]   Delete Concert\n");
        printf(" [B]   Back\n");
        printf("==============================================================\n");
        printf("Option: ");
        getchar();
        option = getchar();

        switch (option) {
            case 'V':
            case 'v': {
                int concertIndex;
                printf("Enter concert number: ");
                scanf("%d", &concertIndex);
                if (concertIndex >= 1 && concertIndex <= numConcerts) {
                    system("cls");
                    struct Concert concert = concerts[concertIndex - 1];
                    printf("\nConcert name: %s\n", concert.name);
                    printf("Date: %s\n", concert.date);
                    printf("Time: %s\n", concert.time);
                    printf("Place: %s\n", concert.place);
                    printf("Available seat plans:\n");

                    for (int i = 0; i < concert.numSeatPlans; i++) {
                        printf("\t%s - %.2f\n", concert.seatPlans[i], concert.prices[i]);
                    }
                    system("pause");
                } 
				else {
                    printf("Invalid concert number!\n");
                    system("pause");
                }
                break;
            }
            case 'D':
            case 'd': {
                int concertIndex;
                printf("Enter concert number to delete: ");
                scanf("%d", &concertIndex);

                if (concertIndex >= 1 && concertIndex <= numConcerts) {
                    system("cls");
                    struct Concert concert = concerts[concertIndex - 1];
                    printf("\nConcert name: %s\n", concert.name);
                    printf("Date: %s\n", concert.date);
                    printf("Time: %s\n", concert.time);
                    printf("Place: %s\n", concert.place);
                    printf("Available seat plans:\n");
                    for (int i = 0; i < concert.numSeatPlans; i++) {
                        printf("\t%s - %.2f\n", concert.seatPlans[i], concert.prices[i]);
                    }

                    printf("\nAre you sure you want to delete this concert? (Y/N): ");
                    getchar();
                    char confirmation = getchar();

                    if (confirmation == 'Y' || confirmation == 'y') {
                        // Delete associated reservations
                        for (int i = 0; i < numReservations; i++) {
                            if (reservations[i].concertId == concertIndex) {
                                // Delete reservation
                                for (int j = i; j < numReservations - 1; j++) {
                                    reservations[j] = reservations[j + 1];
                                }
                                numReservations--;
                                i--;
                            }
                        }
                        // Delete concert
                        for (int i = concertIndex - 1; i < numConcerts - 1; i++) {
                            concerts[i] = concerts[i + 1];
                        }
                        numConcerts--;
                        saveConcerts();
                        saveUsers();
                        printf("Concert and associated reservations deleted successfully!\n");
                        system("pause");
                    } 
					else {
                        printf("Deletion canceled.\n");
                        system("pause");
                    }
                } 
				else {
                    printf("Invalid concert number!\n");
                    system("pause");
                }
                break;
            }
            case 'Q':
            case 'q': {
                int concertIndex;
                printf("Concert Number: ");
                scanf("%d", &concertIndex);

                if (concertIndex < 1 || concertIndex > numConcerts) {
                    printf("Invalid concert number!\n");
                    system("pause");
                    break;
                }
                system("cls");
                printf("\nNo.    Seat Plan    Quantities Left\n");
                printf("=====================================\n");

                for (int i = 0; i < concerts[concertIndex - 1].numSeatPlans; i++) {
                    printf("[%2d]  %15s  %15d\n", i + 1, concerts[concertIndex - 1].seatPlans[i], concerts[concertIndex - 1].quantities[i]);
                }

                printf("=====================================\n");
                system("pause");
                break;
            }
            case 'R':
            case 'r': {
                int concertIndex;
                printf("Concert Number: ");
                scanf("%d", &concertIndex);

                if (concertIndex < 1 || concertIndex > numConcerts) {
                    printf("Invalid concert number!\n");
                    system("pause");
                    break;
                }

                printf("\nNo.  User ID  Name                          Date         Time      Place              Seat Plan          Quantity  Total Price\n");
                printf("========================================================================================================================\n");

                for (int i = 0; i < numReservations; i++) {
                    if (reservations[i].concertId == concertIndex) {
                        printf("[%d]  %7d  %28s  %11s  %8s  %18s  %18s  %8d  %.2f\n",
                            i + 1,
                            reservations[i].userId,
                            reservations[i].name,
                            reservations[i].date,
                            reservations[i].time,
                            reservations[i].place,
                            concerts[concertIndex - 1].seatPlans[reservations[i].seatPlanIndex - 1],
                            reservations[i].quantity,
                            reservations[i].totalPrice
                        );
                    }
                }

                printf("========================================================================================================================\n");
                system("pause");
                break;
            }
            case 'B':
            case 'b':
                printf("Going back...\n");
                system("pause");
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
    } while (option != 'B' && option != 'b');
}


void UserdisplayConcerts() {
if (numConcerts == 0) {
	printf("No concerts available.\n");
	system("pause");
	return;
    }
    
    int option;
    do{
    system("cls");
	printf("==============================================================\n");
    printf(" No.          Concert         \n");
    printf("==============================================================\n");

    for (int i = 0; i < numConcerts; i++) {
	printf(" [%d]          %s\n", i+1, concerts[i].name);
    }

    printf("==============================================================\n");
    printf("[V] View Details  [B] Back\n");
    printf("Option: ");
    getchar();
    option = getchar();

    switch (option) {
	case 'V':
	case 'v': {
	    int concertNumber;
	    printf("Enter concert number: ");
	    scanf("%d", &concertNumber);

	    if (concertNumber >= 1 && concertNumber <= numConcerts) {
	    	system("cls");
		struct Concert concert = concerts[concertNumber - 1];
		printf("\nConcert name: %s\n", concert.name);
		printf("Date: %s\n", concert.date);
		printf("Time: %s\n", concert.time);
		printf("Place: %s\n", concert.place);
		printf("Available seatplans:\n");

		for (int i = 0; i < concert.numSeatPlans; i++) {
		    printf("\t%s - %.2f\n", concert.seatPlans[i], concert.prices[i]);
		}
		system("pause");
	    } else {
		printf("Invalid concert number!\n");
	    }
	    break;
	}
	case 'B':
	case 'b':
	    printf("Going back...\n");
	    system("pause");
		break;
	default:
	    printf("Invalid option!\n");
	    system("pause");
	    break;
    }
}while(option != 'B' && option != 'b');
}

void addConcert() {
	system("cls");
    printf("\n----- Add Concert -----\n");

    if (numConcerts == 10) {
	printf("Maximum concert capacity reached. Cannot add new concerts.\n");
	system("pause");
	return;
    }

    struct Concert newConcert;

    printf("Enter concert name: ");
    getchar();
    fgets(newConcert.name, sizeof(newConcert.name), stdin);
    newConcert.name[strcspn(newConcert.name, "\n")] = '\0';

    printf("Enter concert date: ");
    getchar();
    fgets(newConcert.date, sizeof(newConcert.date), stdin);
    newConcert.date[strcspn(newConcert.date, "\n")] = '\0';

    printf("Enter concert time: ");
    getchar();
    fgets(newConcert.time, sizeof(newConcert.time), stdin);
    newConcert.time[strcspn(newConcert.time, "\n")] = '\0';

    printf("Enter concert place: ");
    getchar();
    fgets(newConcert.place, sizeof(newConcert.place), stdin);
    newConcert.place[strcspn(newConcert.place, "\n")] = '\0';

    printf("Enter number of seat plans: ");
    scanf("%d", &newConcert.numSeatPlans);
    getchar();

    for (int i = 0; i < newConcert.numSeatPlans; i++) {
	printf("Enter seat plan %d: ", i + 1);
	fgets(newConcert.seatPlans[i], sizeof(newConcert.seatPlans[i]), stdin);
	newConcert.seatPlans[i][strcspn(newConcert.seatPlans[i], "\n")] = '\0';

	printf("Enter price for seat plan %d: $", i + 1);
	scanf("%f", &newConcert.prices[i]);
	getchar();

	printf("Enter quantity for seat plan %d: ", i + 1);
	scanf("%d", &newConcert.quantities[i]);
	getchar();
    }

    concerts[numConcerts++] = newConcert;
    saveConcerts();
    printf("Concert added successfully!\n");
    system("pause");
}

void manageUserAccounts() {
    printf("\n----- Manage User Accounts -----\n");

    int totalPages = (numUsers + 9) / 10; // Calculate total pages based on 10 accounts per page
    int currentPage = 1;
    int startUser = (currentPage - 1) * 10;
    int endUser = startUser + 10;
    char option;

    while (1) {
        system("cls");
        printf("\nManage User Accounts (Page %d of %d)\n", currentPage, totalPages);
        printf("==========================================================\n");
        printf(" No.            Username                Password\n");
        printf("==========================================================\n");

        for (int i = startUser; i < endUser && i < numUsers; i++) {
            printf(" [%d] %30s %20s\n", i + 1, users[i].username, users[i].password);
        }

        printf("==========================================================\n");
        printf("[N] Next Page\n");
        printf("[P] Previous Page\n");
        printf("[R] Manage Reservation\n");
        printf("[D] Delete User Accounts\n");
        printf("[B] Back\n");
        printf("Option: ");
        scanf(" %c", &option);

        switch (option) {
            case 'N':
            case 'n':
                if (currentPage < totalPages) {
                    currentPage++;
                    startUser = (currentPage - 1) * 10;
                    endUser = startUser + 10;
                } else {
                    printf("You are already on the last page.\n");
                    system("pause");
                }
                break;

            case 'P':
            case 'p':
                if (currentPage > 1) {
                    currentPage--;
                    startUser = (currentPage - 1) * 10;
                    endUser = startUser + 10;
                } else {
                    printf("You are already on the first page.\n");
                	system("pause");
				}
                break;

            case 'D':
            case 'd': {
                int accountNum;
                printf("Enter Account Number: ");
                scanf("%d", &accountNum);

                if (accountNum >= 1 && accountNum <= numUsers) {
                    system("cls");
                    printf("\nUser Information:\n");
                    printf("Username: %s\n", users[accountNum - 1].username);
                    printf("Name: %s\n", users[accountNum - 1].name);
                    printf("Address: %s\n", users[accountNum - 1].address);
                    printf("Age: %d\n", users[accountNum - 1].age);
                    printf("Phone: %s\n", users[accountNum - 1].phone);
                    printf("Email: %s\n", users[accountNum - 1].email);

                    char confirmation;
                    printf("Are you sure you want to delete this account and associated reservations? (Y/N): ");
                    scanf(" %c", &confirmation);

                    if (confirmation == 'Y' || confirmation == 'y') {
                        // Delete user account and associated reservations
                        for (int i = accountNum - 1; i < numUsers - 1; i++) {
                            users[i] = users[i + 1];
                        }
                        numUsers--;

                        // Delete associated reservations
                        for (int i = 0; i < numReservations; i++) {
                            if (reservations[i].userId == accountNum) {
                                for (int j = i; j < numReservations - 1; j++) {
                                    reservations[j] = reservations[j + 1];
                                }
                                numReservations--;
                                i--; // Decrement i to recheck the current index
                            }
                        }

                        saveReservations();
                        saveUsers();
                        printf("Account '%s' and associated reservations deleted successfully.\n", users[accountNum - 1].username);
                        system("pause");
                        break;
                    } else {
                        printf("Deletion cancelled.\n");
                        system("pause");
                    }
                } else {
                    printf("Invalid account number.\n");
                    system("pause");
                }
                break;
            }

            case 'R':
            case 'r': {
                int accountNum;
                printf("Enter Account Number: ");
                scanf("%d", &accountNum);

                if (accountNum >= 1 && accountNum <= numUsers) {
                    int loggedInUserId = accountNum;

                    printf("\n----- View Reservations -----\n");

                    if (numReservations == 0) {
                        printf("No reservations found.\n");
                        system("pause");
                        break;
                    }

                    printf("Account Reservations\n");
                    printf("==================================================\n");
                    printf("[No]   Concert Name  seatplan     ticket price       quantity          total price\n");
                    printf("==================================================\n");

                    for (int i = 0; i < numReservations; i++) {
                        if (reservations[i].userId == loggedInUserId) {
                            printf(" %-12d %-12s %-12s %-12.2f %-12d %-12.2f\n",
                                   i + 1,
                                   reservations[i].name,
                                   concerts[reservations[i].concertId].seatPlans[reservations[i].seatPlanIndex],
                                   reservations[i].ticketPrice,
                                   reservations[i].quantity,
                                   reservations[i].totalPrice);
                        }
                    }

                    printf("==================================================\n");

                    printf("[D] Delete Reservation\n");
                    printf("[V] View Reservation Details\n");
                    printf("[B] Back\n");
                    printf("Option: ");
                    char reservationOption;
                    scanf(" %c", &reservationOption);

                    switch (reservationOption) {
                        case 'D':
                        case 'd': {
                            printf("Enter Reservation number: ");
                            int reservationNumber;
                            scanf("%d", &reservationNumber);

                            if (reservationNumber < 1 || reservationNumber > numReservations) {
                                printf("Invalid reservation number! Please try again.\n");
                                system("pause");
                                break;
                            }

                            int reservationIndex = reservationNumber - 1;
                            struct Reservation reservation = reservations[reservationIndex];

                            printf("\nReservation Details:\n");
                            printf("Concert Name: %s\n", reservation.name);
                            printf("Date: %s\n", reservation.date);
                            printf("Time: %s\n", reservation.time);
                            printf("Place: %s\n", reservation.place);
                            printf("Seat Plan: %s\n", concerts[reservation.concertId].seatPlans[reservation.seatPlanIndex]);
                            printf("Ticket Price: %.2f\n", reservation.ticketPrice);
                            printf("Quantity: %d\n", reservation.quantity);
                            printf("Total Price: %.2f\n", reservation.totalPrice);

                            printf("\nAre you sure you want to delete this reservation? (Y/N): ");
                            char confirmation;
                            scanf(" %c", &confirmation);

                            switch (confirmation) {
                                case 'Y':
                                case 'y':
                                    for (int i = reservationIndex; i < numReservations - 1; i++) {
                                        reservations[i] = reservations[i + 1];
                                    }
                                    numReservations--;
                                    saveReservations();
                                    printf("Reservation deleted successfully.\n");
                                    system("pause");
                                    break;
                                case 'N':
                                case 'n':
                                    printf("Reservation deletion canceled.\n");
                                    system("pause");
                                    break;
                                default:
                                    printf("Invalid choice! Reservation deletion canceled.\n");
                                    system("pause");
                                    break;
                            }
                            break;
                        }
                        case 'V':
                        case 'v': {
                            printf("Enter Reservation number: ");
                            int reservationNumber;
                            scanf("%d", &reservationNumber);

                            if (reservationNumber < 1 || reservationNumber > numReservations) {
                                printf("Invalid reservation number! Please try again.\n");
                                system("pause");
                                break;
                            }

                            int reservationIndex = reservationNumber - 1;
                            struct Reservation reservation = reservations[reservationIndex];

                            printf("\nReservation Details:\n");
                            printf("Concert Name: %s\n", reservation.name);
                            printf("Date: %s\n", reservation.date);
                            printf("Time: %s\n", reservation.time);
                            printf("Place: %s\n", reservation.place);
                            printf("Seat Plan: %s\n", concerts[reservation.concertId].seatPlans[reservation.seatPlanIndex]);
                            printf("Ticket Price: %.2f\n", reservation.ticketPrice);
                            printf("Quantity: %d\n", reservation.quantity);
                            printf("Total Price: %.2f\n", reservation.totalPrice);
                            system("pause");
                            break;
                        }
                        case 'B':
                        case 'b':
                            break;
                        default:
                            printf("Invalid choice! Please try again.\n");
                            system("pause");
                            break;
                    }
                    break;
                } else {
                    printf("Invalid account number.\n");
                    system("pause");
                }
                break;
            }

            case 'B':
            case 'b':
                return;

            default:
                printf("Invalid choice! Please try again.\n");
                system("pause");
                break;
        }
    }
}




void reserveTicket() {
    if (numConcerts == 0) {
	printf("No concerts available for reservation.\n");
	system("pause");
	return;
    }

    int concertIndex;
    printf("\n----- Reserve Ticket -----\n");
    for (int i = 0; i < numConcerts; i++) {
	printf("[%d] %s\n", i+1, concerts[i].name);
    }
    printf("Enter the concert index to reserve a ticket: ");
    scanf("%d", &concertIndex);
    concertIndex--;

    if (concertIndex < 0 || concertIndex >= numConcerts) {
	printf("Invalid concert index!\n");
	system("pause");
	return;
    }

    int seatPlanIndex;
    printf("\n----- Seat Plans -----\n");
    struct Concert selectedConcert = concerts[concertIndex];
    for (int i = 0; i < selectedConcert.numSeatPlans; i++) {
	printf("%d. %s - %.2f\n", i + 1, selectedConcert.seatPlans[i], selectedConcert.prices[i]);
    }
    printf("Enter the number of Seat Plan : ");
    scanf("%d", &seatPlanIndex);
    seatPlanIndex--;

    if (seatPlanIndex < 0 || seatPlanIndex >= selectedConcert.numSeatPlans) {
	printf("Invalid seat plan index!\n");
	system("pause");
	return;
    }

    int quantity;
    printf("Enter the quantity of tickets: ");
    scanf("%d", &quantity);

    if (quantity <= 0 || quantity > selectedConcert.quantities[seatPlanIndex]) {
	printf("Invalid ticket quantity!\n");
	system("pause");
	return;
    }

    float ticketPrice = selectedConcert.prices[seatPlanIndex];
    float totalPrice = ticketPrice * quantity;

    printf("\n----- Ticket Details -----\n");
    printf("Concert: %s\n", selectedConcert.name);
    printf("Seat Plan: %s\n", selectedConcert.seatPlans[seatPlanIndex]);
    printf("Ticket Price: %.2f\n", ticketPrice);
    printf("Quantity: %d\n", quantity);
    printf("Total Price: %.2f\n", totalPrice);

    int confirm;
    printf("\nEnter 1 to confirm the reservation, or 0 to cancel: ");
    scanf("%d", &confirm);

    if (confirm == 1) {
	struct Reservation newReservation;
	newReservation.userId = loggedInUserId;
	newReservation.concertId = concertIndex;
	strcpy(newReservation.name, concerts[concertIndex].name);
	strcpy(newReservation.date, concerts[concertIndex].date);
	strcpy(newReservation.time, concerts[concertIndex].time);
	strcpy(newReservation.place, concerts[concertIndex].place);
	newReservation.seatPlanIndex = seatPlanIndex;
	newReservation.quantity = quantity;
	newReservation.ticketPrice = ticketPrice;
	newReservation.totalPrice = totalPrice;

concerts[concertIndex].quantities[seatPlanIndex] -= quantity;

	reservations[numReservations++] = newReservation;
	saveReservations();
	printf("Reservation successful! Thank you for your purchase.\n");
	system("pause");
    } else {
	printf("Reservation canceled.\n");
	system("pause");
    }
}

void manageReservations() {
    printf("\n----- View Reservations -----\n");

    if (numReservations == 0) {
	printf("No reservations found.\n");
	system("pause");
	return;
    }

    printf("Account Reservations\n");
    printf("==================================================\n");
    printf("[No]   Concert Name  seatplan     ticket price       quantity          total price\n");
    printf("==================================================\n");

    for (int i = 0; i < numReservations; i++) {
	if (reservations[i].userId == loggedInUserId) {
	    printf(" %-12d %-12s %-12s %-12.2f %-12d %-12.2f\n",
		i + 1,
		reservations[i].name,
		concerts[reservations[i].concertId].seatPlans[reservations[i].seatPlanIndex],
		reservations[i].ticketPrice,
		reservations[i].quantity,
		reservations[i].totalPrice);
	}
    }

    printf("==================================================\n");

    printf("[D] Delete Reservation\n");
    printf("[V] View Reservation Details\n");
    printf("[B] Back\n");
    printf("Option: ");
    char option;
    scanf(" %c", &option);

    switch (option) {
	case 'D':
	case 'd':{
	 printf("Enter Reservation number: ");
    int reservationNumber;
    scanf("%d", &reservationNumber);

    if (reservationNumber < 1 || reservationNumber > numReservations) {
	printf("Invalid reservation number! Please try again.\n");
	return;
    }

    int reservationIndex = reservationNumber - 1;
    struct Reservation reservation = reservations[reservationIndex];

    printf("\nReservation Details:\n");
    printf("Concert Name: %s\n", reservation.name);
    printf("Date: %s\n", reservation.date);
    printf("Time: %s\n", reservation.time);
    printf("Place: %s\n", reservation.place);
    printf("Seat Plan: %s\n", concerts[reservation.concertId].seatPlans[reservation.seatPlanIndex]);
    printf("Ticket Price: %.2f\n", reservation.ticketPrice);
    printf("Quantity: %d\n", reservation.quantity);
    printf("Total Price: %.2f\n", reservation.totalPrice);

    printf("\nAre you sure you want to delete this reservation? (Y/N): ");
    char confirmation;
    scanf(" %c", &confirmation);

    switch (confirmation) {
	case 'Y':
	case 'y':
	    for (int i = reservationIndex; i < numReservations - 1; i++) {
		reservations[i] = reservations[i + 1];
	    }
	    numReservations--;
		saveReservations();
	    printf("Reservation deleted successfully.\n");
		system("pause");	
	    break;
	case 'N':
	case 'n':
	    printf("Reservation deletion canceled.\n");
	    system("pause");	
	    break;
	default:
	    printf("Invalid choice! Reservation deletion canceled.\n");
	    system("pause");	
	    break;
    }
	    break;
	    }
	case 'V':
	case 'v':{
	    printf("Enter Reservation number: ");
    int reservationNumber;
    scanf("%d", &reservationNumber);

    if (reservationNumber < 1 || reservationNumber > numReservations) {
	printf("Invalid reservation number! Please try again.\n");
	system("pause");	
	return;
    }

    int reservationIndex = reservationNumber - 1;
    struct Reservation reservation = reservations[reservationIndex];

    printf("\nReservation Details:\n");
    printf("Concert Name: %s\n", reservation.name);
    printf("Date: %s\n", reservation.date);
    printf("Time: %s\n", reservation.time);
    printf("Place: %s\n", reservation.place);
    printf("Seat Plan: %s\n", concerts[reservation.concertId].seatPlans[reservation.seatPlanIndex]);
    printf("Ticket Price: %.2f\n", reservation.ticketPrice);
    printf("Quantity: %d\n", reservation.quantity);
    printf("Total Price: %.2f\n", reservation.totalPrice);
    system("pause");	
	    break; 
	    }
	case 'B':
	case 'b':
	    return;
	default:
	    printf("Invalid choice! Please try again.\n");
	    system("pause");	
	    break;
    }
}


void saveConcerts() {
    FILE* file = fopen("C:/concerts.txt", "w");
    if (file == NULL) {
	printf("Error opening file for writing!\n");
	return;
    }

    fprintf(file, "%d\n", numConcerts);

    for (int i = 0; i < numConcerts; i++) {
	fprintf(file, "%s\n", concerts[i].name);
	fprintf(file, "%s\n", concerts[i].date);
	fprintf(file, "%s\n", concerts[i].time);
	fprintf(file, "%s\n", concerts[i].place);
	fprintf(file, "%d\n", concerts[i].numSeatPlans);

	for (int j = 0; j < concerts[i].numSeatPlans; j++) {
	    fprintf(file, "%s\n", concerts[i].seatPlans[j]);
	    fprintf(file, "%.2f\n", concerts[i].prices[j]);
	    fprintf(file, "%d\n", concerts[i].quantities[j]);
	}
    }

    fclose(file);
}

void loadConcerts() {
    FILE* file = fopen("C:/concerts.txt", "r");
    if (file == NULL) {
	printf("No concerts data found!\n");
	return;
    }

    fscanf(file, "%d\n", &numConcerts);

    for (int i = 0; i < numConcerts; i++) {
	fgets(concerts[i].name, sizeof(concerts[i].name), file);
	concerts[i].name[strcspn(concerts[i].name, "\n")] = '\0';
	fgets(concerts[i].date, sizeof(concerts[i].date), file);
	concerts[i].date[strcspn(concerts[i].date, "\n")] = '\0';
	fgets(concerts[i].time, sizeof(concerts[i].time), file);
	concerts[i].time[strcspn(concerts[i].time, "\n")] = '\0';
	fgets(concerts[i].place, sizeof(concerts[i].place), file);
	concerts[i].place[strcspn(concerts[i].place, "\n")] = '\0';
	fscanf(file, "%d\n", &concerts[i].numSeatPlans);

	for (int j = 0; j < concerts[i].numSeatPlans; j++) {
	    fgets(concerts[i].seatPlans[j], sizeof(concerts[i].seatPlans[j]), file);
	    concerts[i].seatPlans[j][strcspn(concerts[i].seatPlans[j], "\n")] = '\0';
	    fscanf(file, "%f\n", &concerts[i].prices[j]);
	    fscanf(file, "%d\n", &concerts[i].quantities[j]);
	}
    }

    fclose(file);
}

void saveUsers() {
    FILE* file = fopen("C:/users.txt", "w");
    if (file == NULL) {
	printf("Error opening file for writing!\n");
	return;
    }

    fprintf(file, "%d\n", numUsers);

    for (int i = 0; i < numUsers; i++) {
	fprintf(file, "%s\n", users[i].name);
	fprintf(file, "%s\n", users[i].address);
	fprintf(file, "%d\n", users[i].age);
	fprintf(file, "%s\n", users[i].phone);
	fprintf(file, "%s\n", users[i].email);
	fprintf(file, "%s\n", users[i].username);
	fprintf(file, "%s\n", users[i].password);
    }

    fclose(file);
}

void loadUsers() {
    FILE* file = fopen("C:/users.txt", "r");
    if (file == NULL) {
	printf("No users data found!\n");
	return;
    }

    fscanf(file, "%d\n", &numUsers);

    for (int i = 0; i < numUsers; i++) {
	fgets(users[i].name, sizeof(users[i].name), file);
	users[i].name[strcspn(users[i].name, "\n")] = '\0';
	fgets(users[i].address, sizeof(users[i].address), file);
	users[i].address[strcspn(users[i].address, "\n")] = '\0';
	fscanf(file, "%d\n", &users[i].age);
	fgets(users[i].phone, sizeof(users[i].phone), file);
	users[i].phone[strcspn(users[i].phone, "\n")] = '\0';
	fgets(users[i].email, sizeof(users[i].email), file);
	users[i].email[strcspn(users[i].email, "\n")] = '\0';
	fgets(users[i].username, sizeof(users[i].username), file);
	users[i].username[strcspn(users[i].username, "\n")] = '\0';
	fgets(users[i].password, sizeof(users[i].password), file);
	users[i].password[strcspn(users[i].password, "\n")] = '\0';
    }

    fclose(file);
}

void saveReservations() {
    FILE* file = fopen("C:/reservations.txt", "w");
    if (file == NULL) {
	printf("Error opening file for writing!\n");
	return;
    }

    fprintf(file, "%d\n", numReservations);

    for (int i = 0; i < numReservations; i++) {
	fprintf(file, "%d\n", reservations[i].userId);
	fprintf(file, "%d\n", reservations[i].concertId);
	fprintf(file, "%s\n", reservations[i].name);
	fprintf(file, "%s\n", reservations[i].date);
	fprintf(file, "%s\n", reservations[i].time);
	fprintf(file, "%s\n", reservations[i].place);
	fprintf(file, "%d\n", reservations[i].seatPlanIndex);
	fprintf(file, "%.2f\n", reservations[i].ticketPrice);
	fprintf(file, "%d\n", reservations[i].quantity);
	fprintf(file, "%.2f\n", reservations[i].totalPrice);
    }

    fclose(file);
}



void loadReservations() {
    FILE* file = fopen("C:/reservations.txt", "r");
    if (file == NULL) {
	printf("No reservations data found!\n");
	return;
    }

    fscanf(file, "%d\n", &numReservations);

    for (int i = 0; i < numReservations; i++) {
	fscanf(file, "%d\n", &reservations[i].userId);
	fscanf(file, "%d\n", &reservations[i].concertId);
	fgets(reservations[i].name, sizeof(reservations[i].name), file);
	reservations[i].name[strcspn(reservations[i].name, "\n")] = '\0';
	fgets(reservations[i].date, sizeof(reservations[i].date), file);
	reservations[i].date[strcspn(reservations[i].date, "\n")] = '\0';
	fgets(reservations[i].time, sizeof(reservations[i].time), file);
	reservations[i].time[strcspn(reservations[i].time, "\n")] = '\0';
	fgets(reservations[i].place, sizeof(reservations[i].place), file);
	reservations[i].place[strcspn(reservations[i].place, "\n")] = '\0';
	fscanf(file, "%d\n", &reservations[i].seatPlanIndex);
	fscanf(file, "%f\n", &reservations[i].ticketPrice);
	fscanf(file, "%d\n", &reservations[i].quantity);
	fscanf(file, "%f\n", &reservations[i].totalPrice);
    }

    fclose(file);
}


