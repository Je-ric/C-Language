#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//multiple seatplan in a user
//must have admin and user
//can edit concert by admin
//bank info number
struct user_res{
	char name[50];
	char address[50];
	int age;
	char phone[15];
	char email[20];
	char username[50];
	char pin[10];
	char concert_name[50];
	char date[20];
	char time[20];
	char place[50];
	double svipPrice;
	double vipPrice;
	double upperBoxPrice;
	double lowerBoxPrice;
	double standingPrice;
	char seatPlan[20];
	double ticketPrice;
	int quantity;
	double totalPrice;
	char paymentMethod[50];
};

struct user_res concerts[5];
struct user_res reservation[100];
int num_reservations = 0;

int check_duplicate(char* value) {
    for (int i = 0; i < num_reservations; i++) {
	if (strcmp(value, reservation[i].phone) == 0) {
	    return 1;
	}
	if (strcmp(value, reservation[i].email) == 0) {
	    return 2;
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

void save_reservation() {
    FILE* file = fopen("C:/C/res.txt", "w");

    for (int i = 0; i < num_reservations; i++) {
	fprintf(file, "%s,%s,%s,%s,%d,%s,%s,%s,%s,%s,%s,%s,%lf,%d,%lf,%s\n",
	    reservation[i].username,reservation[i].pin,reservation[i].name,
	    reservation[i].address,reservation[i].age,reservation[i].phone,
	    reservation[i].email,reservation[i].concert_name,
	    reservation[i].date,reservation[i].time,reservation[i].place,
	    reservation[i].seatPlan,reservation[i].ticketPrice,
	    reservation[i].quantity,reservation[i].totalPrice,
	    reservation[i].paymentMethod);
    }

    fclose(file);
}

void load_reservation() {
    FILE* file = fopen("C:/C/res.txt", "r");

    if (file == NULL) {
	printf("Error: Unable to open the file.\n");
	return;
    }

    char line[300];
    while (fgets(line, sizeof(line), file)) {
	char* username = strtok(line, ",");
	char* pin = strtok(NULL, ",");
	char* name = strtok(NULL, ",");
	char* address = strtok(NULL, ",");
	char* age_str = strtok(NULL, ",");
	int age = atoi(age_str);
	char* phone = strtok(NULL, ",");
	char* email = strtok(NULL, ",");
	char* concert_name = strtok(NULL, ",");
	char* date = strtok(NULL, ",");
	char* time = strtok(NULL, ",");
	char* place = strtok(NULL, ",");
	char* seatPlan = strtok(NULL, ",");
	char* ticketPrice_str = strtok(NULL, ",");
	double ticketPrice = atof(ticketPrice_str);
	char* quantity_str = strtok(NULL, ",");
	int quantity = atoi(quantity_str);
	char* totalPrice_str = strtok(NULL, ",");
	double totalPrice = atof(totalPrice_str);
	char* paymentMethod = strtok(NULL, "\n");

	strcpy(reservation[num_reservations].username, username);
	strcpy(reservation[num_reservations].pin, pin);
	strcpy(reservation[num_reservations].name, name);
	strcpy(reservation[num_reservations].address, address);
	reservation[num_reservations].age = age;
	strcpy(reservation[num_reservations].phone, phone);
	strcpy(reservation[num_reservations].email, email);
	strcpy(reservation[num_reservations].concert_name, concert_name);
	strcpy(reservation[num_reservations].date, date);
	strcpy(reservation[num_reservations].time, time);
	strcpy(reservation[num_reservations].place, place);
	strcpy(reservation[num_reservations].seatPlan, seatPlan);
	reservation[num_reservations].ticketPrice = ticketPrice;
	reservation[num_reservations].quantity = quantity;
	reservation[num_reservations].totalPrice = totalPrice;
	strcpy(reservation[num_reservations].paymentMethod, paymentMethod);
	strcpy(reservation[num_reservations].paymentMethod, paymentMethod);

	num_reservations++;
    }

    fclose(file);
}

void header(){
	printf("--------------------------------------------------------------------------------");
	printf(" No.              Concert name                           Email\n");
	printf("--------------------------------------------------------------------------------");
}



void make_reservation() {
	int i;
	system("cls");
	printf("\n\t\t\t\t* MAKE RESERVATION * \n\n");

	printf("\t\tNOTE: EVERY USERNAME HAVE ONLY 1 RESERVATION\n");
	printf("\t\tNOTE: REMEMBER ALL THE INFORMATION YOU INPUT\n");

	if(num_reservations >= 100) {
		printf("Error: Maximum number of reservations reached.\n");
		return;
	}

	struct user_res new_user;
	int duplicate, valid;

	printf("\nSet desired username: ");
	gets(new_user.username);

	for (i = 0; i < num_reservations; i++) {
		if (strcmp(new_user.username, reservation[i].username) == 0) {
			printf("\tUsername already exist!");
			return;
		}
	}

	do{
		printf("Set desired 6-digit pin: ");
		gets(new_user.pin);
		valid = valid_pin(new_user.pin);
		if(valid == 1){
			printf("\tInvalid pin! Please enter 6-digit pin\n");
		}
		if(valid == 2) {
			printf("\tMake sure to use number only\n");
		}
	}while(valid == 1 || valid == 2);

	printf("\nEnter name: ");
	gets(new_user.name);

	printf("Enter address: ");
	gets(new_user.address);

	do{
		printf("Enter age: ");
		scanf("%d",&new_user.age);
		getchar();
		if(new_user.age < 18){
			printf("\tUser must be 18 years old above!\n");
		}
	}while(new_user.age < 18);

	do{
		printf("Enter phone number: ");
		gets(new_user.phone);
		duplicate = check_duplicate(new_user.phone);
		valid = valid_input(new_user.phone);
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
		printf("Enter email address: ");
		gets(new_user.email);
		duplicate = check_duplicate(new_user.email);
		if(duplicate == 2) {
			printf("\tA reservation with the same email already exists!\n");
		}
	}while(duplicate == 2);

strcpy(concerts[0].concert_name, "Black Pink: BORN PINK World Tour Manila");
strcpy(concerts[0].date, "Dec 28 2023");
strcpy(concerts[0].time, "8:30 PM");
strcpy(concerts[0].place, "Philippine Arena");
concerts[0].svipPrice = 200.0;
concerts[0].vipPrice = 150.0;
concerts[0].upperBoxPrice = 100.0;
concerts[0].lowerBoxPrice = 80.0;
concerts[0].standingPrice = 50.0;

strcpy(concerts[1].concert_name, "Twice: READY TO BE");
strcpy(concerts[1].date, "August 5 2023");
strcpy(concerts[1].time, "7:30 PM");
strcpy(concerts[1].place, "Philippine Arena");
concerts[1].svipPrice = 300.0;
concerts[1].vipPrice = 250.0;
concerts[1].upperBoxPrice = 150.0;
concerts[1].lowerBoxPrice = 100.0;
concerts[1].standingPrice = 70.0;

strcpy(concerts[2].concert_name, "SB19: PAGTATAG World Tour");
strcpy(concerts[2].date, "October 25 2023");
strcpy(concerts[2].time, "8:00 PM");
strcpy(concerts[2].place, "Araneta Coliseum");
concerts[2].svipPrice = 400.0;
concerts[2].vipPrice = 300.0;
concerts[2].upperBoxPrice = 200.0;
concerts[2].lowerBoxPrice = 150.0;
concerts[2].standingPrice = 100.0;

strcpy(concerts[3].concert_name, "Backstreet Boys: DNA World Tour 2023");
strcpy(concerts[3].date, "July 28 2023");
strcpy(concerts[3].time, "7:00 PM");
strcpy(concerts[3].place, "Philippine Arena");
concerts[3].svipPrice = 250.0;
concerts[3].vipPrice = 200.0;
concerts[3].upperBoxPrice = 120.0;
concerts[3].lowerBoxPrice = 90.0;
concerts[3].standingPrice = 60.0;

strcpy(concerts[4].concert_name, "One Direction: THE COMEBACK");
strcpy(concerts[4].date, "September 20 2023");
strcpy(concerts[4].time, "7:30 PM");
strcpy(concerts[4].place, "Araneta Coliseum");
concerts[4].svipPrice = 350.0;
concerts[4].vipPrice = 300.0;
concerts[4].upperBoxPrice = 180.0;
concerts[4].lowerBoxPrice = 150.0;
concerts[4].standingPrice = 80.0;

again:
back:

	system("cls");
	printf("\n\t\t\t    * TICKET RESERVATION * \n\n");
	printf("================================================================================");
	printf("Available Concerts:\n");
	printf("================================================================================");
	for(i = 0; i < 5; i++) {
		printf("\t[%d] %s\n", i + 1, concerts[i].concert_name);
	}
	printf("--------------------------------------------------------------------------------");

	int concertChoice;
	printf("\nEnter the concert number: ");
	scanf("%d", &concertChoice);
	if(concertChoice >= 6 || concertChoice == 0){
		getchar();
		goto again;
	}

	int concert_index = concertChoice - 1;
	system("cls");
	printf("\n\t\t\t    * TICKET RESERVATION * \n\n");
	printf("================================================================================");
	printf("Concert Details:\n");
	printf("================================================================================");
	printf("\tConcert: %s\n", concerts[concert_index].concert_name);
	printf("\tDate: %s\n", concerts[concert_index].date);
	printf("\tTime: %s\n", concerts[concert_index].time);
	printf("\tVenue: %s\n", concerts[concert_index].place);
	printf("================================================================================");
	printf("Seat Plan and Prices for %s\n", concerts[concert_index].concert_name);
	printf("================================================================================");
	printf("\t1. SVIP - $%.2lf\n", concerts[concert_index].svipPrice);
	printf("\t2. VIP - $%.2lf\n", concerts[concert_index].vipPrice);
	printf("\t3. Upper Box - $%.2lf\n", concerts[concert_index].upperBoxPrice);
	printf("\t4. Lower Box - $%.2lf\n", concerts[concert_index].lowerBoxPrice);
	printf("\t5. Standing - $%.2lf\n", concerts[concert_index].standingPrice);
	printf("--------------------------------------------------------------------------------");

	int select;
	printf("\n[1] Proceed\t[2] Back\t[3] Exit\t\tSelect: ");
	scanf("%d",&select);
	if(select == 1){ goto proceed; }
	else if(select == 2){ goto back; }
	else if(select == 3){ return; }
	else{ goto again; }

proceed:

	int seatChoice;
	do{
		system("cls");
		printf("\n\t\t\t    * TICKET RESERVATION * \n\n");
		printf("================================================================================");
		printf("Concert Details:\n");
		printf("================================================================================");
		printf("\tConcert: %s\n", concerts[concert_index].concert_name);
		printf("\tDate: %s\n", concerts[concert_index].date);
		printf("\tTime: %s\n", concerts[concert_index].time);
		printf("\tVenue: %s\n", concerts[concert_index].place);
		printf("================================================================================");
		printf("Seat Plan and Prices for %s\n", concerts[concert_index].concert_name);
		printf("================================================================================");
		printf("\t1. SVIP - $%.2lf\n", concerts[concert_index].svipPrice);
		printf("\t2. VIP - $%.2lf\n", concerts[concert_index].vipPrice);
		printf("\t3. Upper Box - $%.2lf\n", concerts[concert_index].upperBoxPrice);
		printf("\t4. Lower Box - $%.2lf\n", concerts[concert_index].lowerBoxPrice);
		printf("\t5. Standing - $%.2lf\n", concerts[concert_index].standingPrice);
		printf("--------------------------------------------------------------------------------");
		printf("\nEnter ticket type number: ");
		scanf("%d", &seatChoice);
	}while(seatChoice < 1 || seatChoice > 5);

	switch(seatChoice) {
		case 1:
			strcpy(new_user.seatPlan, "SVIP");
			new_user.ticketPrice = concerts[concert_index].svipPrice;
			break;
		case 2:
			strcpy(new_user.seatPlan, "VIP");
			new_user.ticketPrice = concerts[concert_index].vipPrice;
			break;
		case 3:
			strcpy(new_user.seatPlan, "UPPERBOX");
			new_user.ticketPrice = concerts[concert_index].upperBoxPrice;
			break;
		case 4:
			strcpy(new_user.seatPlan, "LOWERBOX");
			new_user.ticketPrice = concerts[concert_index].lowerBoxPrice;
			break;
		case 5:
			strcpy(new_user.seatPlan, "STANDING");
			new_user.ticketPrice = concerts[concert_index].standingPrice;
			break;
	}

	printf("\tYou select %s\n",new_user.seatPlan);
	printf("Enter quantity of tickets: ");
	scanf("%d", &new_user.quantity);
	getchar();

	if(new_user.quantity <= 0) {
		printf("Invalid quantity. Reservation canceled.\n");
		return;
	}

	new_user.totalPrice = new_user.ticketPrice * new_user.quantity;
	printf("\tTotal Price: $%.2lf\n", new_user.totalPrice);
	getchar();
	int paymentChoice;

	do{
	system("cls");
	printf("\n\n\n\n\n\n\n\t\t\t     * TICKET RESERVATION * \n");
	printf("\t\t\t  ============================\n");
	printf("\t\t\t  |  Select Payment Method   |\n");
	printf("\t\t\t  ============================\n");
	printf("\t\t\t  |  [1] Bank Account        |\n");
	printf("\t\t\t  |  [2] GCash               |\n");
	printf("\t\t\t  |  [3] PayPal              |\n");
	printf("\t\t\t  |  [4] Exit                |\n");
	printf("\t\t\t  ----------------------------\n");
	printf("\t\t\t  Select: ");
	scanf("%d", &paymentChoice);
	getchar();

	if (paymentChoice == 1) {
		strcpy(new_user.paymentMethod, "Bank Account");
	}
	else if (paymentChoice == 2) {
		strcpy(new_user.paymentMethod, "GCash");
	}
	else if (paymentChoice == 3) {
		strcpy(new_user.paymentMethod, "PayPal");
	}
	else if (paymentChoice == 4) {
		return;
	}
	}while(paymentChoice < 1 || paymentChoice > 4);

	user_res paymentInfo;

confirm_again:

	system("cls");
	printf("\n\n\t\t        You're paying through %s\n",new_user.paymentMethod);
	printf("\n\t     Confirm payment by entering your information again\n\n");
	printf("\n\tEnter name for account: ");
	gets(paymentInfo.name);

	printf("\tEnter home address for account: ");
	gets(paymentInfo.address);

	printf("\tEnter age for account: ");
	scanf("%d", &paymentInfo.age);
	getchar();

	do{
		printf("\tEnter phone number for account: ");
		gets(paymentInfo.phone);
		valid = valid_input(paymentInfo.phone);
		if(valid == 1) {
			printf("\tInvalid phone number. Please enter 11 digits.\n");
		}
		else if(valid == 2) {
			printf("\tInvalid input. Make sure to input your phone number.\n");
		}
	}while(valid == 1 || valid == 2);

	printf("\tEnter email address for account: ");
	gets(paymentInfo.email);

	if (strcmp(paymentInfo.name, new_user.name) == 0 &&
		strcmp(paymentInfo.address, new_user.address) == 0 &&
		paymentInfo.age == new_user.age &&
		strcmp(paymentInfo.phone, new_user.phone) == 0 &&
		strcmp(paymentInfo.email, new_user.email) == 0) {
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Payment confirmed!\n\n\n\n\n\n");
		getchar();
	}
	else{
error:
	system("cls");
	printf("\n\n\t\t      Payment information does not match!\n");
	printf("\n\t    Would you like to try again the confirmation (Y/N)? ");
	char confirm_again;
	scanf(" %c", &confirm_again);
	getchar();

	if (confirm_again == 'Y' || confirm_again == 'y') {
		goto confirm_again;
	}
	else if (confirm_again == 'N' || confirm_again == 'n') {
		printf("\n\n\n\n\n\n\n\n\n\t\t\t  Payment Transaction Canceled!\n\n\n\n\n");
		getchar();
		system("cls");
		getchar();
		printf("\n\n\n\n\n\n\n\n\t\t\t    Reservation Canceled!\n\n\n\n\n\n\n\n\n\n\n");
		return;
	}
	else {  goto error; }
	}

confirm:

	system("cls");
	printf("\n\n\t\t\t\t * TICKET SUMMARY * \n\n");
	printf("\t\t   Concert: %s\n", concerts[concert_index].concert_name);
	printf("\t\t   Date: %s\n", concerts[concert_index].date);
	printf("\t\t   Time: %s\n", concerts[concert_index].time);
	printf("\t\t   Venue: %s\n", concerts[concert_index].place);
	printf("\n\t\t   Seat Plan: %s\n", new_user.seatPlan);
	printf("\t\t   Ticket Price: $%.2lf\n", new_user.ticketPrice);
	printf("\t\t   Quantity: %d\n", new_user.quantity);
	printf("\t\t   Total Price: $%.2lf\n", new_user.totalPrice);
	printf("\t\t   Payment Method: %s\n", new_user.paymentMethod);

	printf("\n\n\t\t\tPlease confirm your reservation.\n");
	char confirmation;
	printf("\t\t\tEnter 'Y' to confirm or 'N' to cancel: ");
	scanf(" %c", &confirmation);

	if (confirmation == 'y' || confirmation == 'Y') {
		strcpy(new_user.concert_name, concerts[concert_index].concert_name);
		strcpy(new_user.date, concerts[concert_index].date);
		strcpy(new_user.time, concerts[concert_index].time);
		strcpy(new_user.place, concerts[concert_index].place);
		strcpy(reservation[num_reservations].paymentMethod, new_user.paymentMethod);

		reservation[num_reservations] = new_user;
		num_reservations++;
		save_reservation();
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Reservation successful!\n");
	}
	else if(confirmation == 'n' || confirmation == 'N'){
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Reservation canceled!\n\n\n\n\n\n\n\n");
	}
	else{ goto confirm; }
}


void view_all() {
	int page = 1;
	int total_pages = (num_reservations + 9) / 10;
	int start_index = (page - 1) * 10;
	int end_index = start_index + 10;

	while(page >= 1 && page <= total_pages){
		system("cls");
		printf("\n\t\t\t    * VIEW ALL RESERVATIONS * \n");
		header();
		for (int i = start_index; i < end_index && i < num_reservations; i++) {
			printf(" %1d. %-45s %-20s\n", i + 1, reservation[i].concert_name, reservation[i].email);
		}
		printf("--------------------------------------------------------------------------------");
		printf("Page %d of %d\n", page, total_pages);
		printf("--------------------------------------------------------------------------------");
		printf("[N] Next Page  [P] Previous Page  [V] View  [E] Edit  [C] Cancel  [Q] Quit\n");
		printf("--------------------------------------------------------------------------------");

		char choice;
		printf("Enter your choice: ");
		scanf(" %c", &choice);
		getchar();

		switch (choice){
			case 'N':
			case 'n':
				page++;
				break;
			case 'P':
			case 'p':
				page--;
				break;
			case 'V':
			case 'v': {
				int res_num;
				printf("Enter the reservation number to view details: ");
				scanf("%d", &res_num);
				getchar();

				if(res_num >= 1 && res_num <= num_reservations) {
					res_num--;
					printf("Enter username: ");
					char username[50];
					gets(username);

					printf("Enter PIN: ");
					char pin[10];
					gets(pin);

			if(strcmp(username, reservation[res_num].username) == 0 &&
				strcmp(pin, reservation[res_num].pin) == 0) {
				system("cls");
				printf("================================================================================");
				printf("Reservation Details:\n");
				printf("================================================================================");
				printf("\tName: %s\n", reservation[res_num].name);
				printf("\tAddress: %s\n", reservation[res_num].address);
				printf("\tAge: %d\n", reservation[res_num].age);
				printf("\tPhone: %s\n", reservation[res_num].phone);
				printf("\tEmail: %s\n", reservation[res_num].email);
				printf("--------------------------------------------------------------------------------");
				printf("\tConcert Name: %s\n", reservation[res_num].concert_name);
				printf("\tDate: %s\n", reservation[res_num].date);
				printf("\tTime: %s\n", reservation[res_num].time);
				printf("\tPlace: %s\n", reservation[res_num].place);
				printf("\tSeat Plan: %s\n", reservation[res_num].seatPlan);
				printf("\tTicket Price: %.2lf\n", reservation[res_num].ticketPrice);
				printf("\tQuantity: %d\n", reservation[res_num].quantity);
				printf("\tTotal Price: %.2lf\n", reservation[res_num].totalPrice);
				printf("\tPayment Method: %s\n", reservation[res_num].paymentMethod);
				printf("--------------------------------------------------------------------------------");
				printf("\n");
				system("pause");
			}
			else{
				printf("\nInvalid username or PIN!\n");
				system("pause");
			}
		}
		else{
			printf("\nInvalid reservation number!\n");
			system("pause");
		}
		break;
		}

			case 'C':
			case 'c': {
				int res_num;
				printf("Enter the reservation number to cancel reservation: ");
				scanf("%d", &res_num);
				getchar();

				if(res_num >= 1 && res_num <= num_reservations) {
					res_num--;
					printf("Enter username: ");
					char username[50];
					gets(username);

					printf("Enter PIN: ");
					char pin[10];
					gets(pin);

				if(strcmp(username, reservation[res_num].username) == 0 &&
					strcmp(pin, reservation[res_num].pin) == 0) {
					system("cls");
					printf("================================================================================");
					printf("Reservation Details:\n");
					printf("================================================================================");
					printf("\tName: %s\n", reservation[res_num].name);
					printf("\tAddress: %s\n", reservation[res_num].address);
					printf("\tAge: %d\n", reservation[res_num].age);
					printf("\tPhone: %s\n", reservation[res_num].phone);
					printf("\tEmail: %s\n", reservation[res_num].email);
					printf("--------------------------------------------------------------------------------");
					printf("\tConcert Name: %s\n", reservation[res_num].concert_name);
					printf("\tDate: %s\n", reservation[res_num].date);
					printf("\tTime: %s\n", reservation[res_num].time);
					printf("\tPlace: %s\n", reservation[res_num].place);
					printf("\tSeat Plan: %s\n", reservation[res_num].seatPlan);
					printf("\tTicket Price: %.2lf\n", reservation[res_num].ticketPrice);
					printf("\tQuantity: %d\n", reservation[res_num].quantity);
					printf("\tTotal Price: %.2lf\n", reservation[res_num].totalPrice);
					printf("\tPayment Method: %s\n", reservation[res_num].paymentMethod);
					printf("--------------------------------------------------------------------------------");
					printf("\nDo you want to cancel this reservation? (Y/N): ");
					char confirm;
					scanf("%c", &confirm);
					getchar();

				if(confirm == 'Y' || confirm == 'y') {
					for (int i = res_num; i < num_reservations - 1; i++){
						strcpy(reservation[i].username, reservation[i + 1].username);
						strcpy(reservation[i].pin, reservation[i + 1].pin);
						strcpy(reservation[i].name, reservation[i + 1].name);
						strcpy(reservation[i].address, reservation[i + 1].address);
						reservation[i].age = reservation[i + 1].age;
						strcpy(reservation[i].phone, reservation[i + 1].phone);
						strcpy(reservation[i].email, reservation[i + 1].email);
						strcpy(reservation[i].concert_name, reservation[i + 1].concert_name);
						strcpy(reservation[i].date, reservation[i + 1].date);
						strcpy(reservation[i].time, reservation[i + 1].time);
						strcpy(reservation[i].place, reservation[i + 1].place);
						strcpy(reservation[i].seatPlan, reservation[i + 1].seatPlan);
						reservation[i].ticketPrice = reservation[i + 1].ticketPrice;
						reservation[i].quantity = reservation[i + 1].quantity;
						reservation[i].totalPrice = reservation[i + 1].totalPrice;
						strcpy(reservation[i].paymentMethod, reservation[i + 1].paymentMethod);
					}
				num_reservations--;
				save_reservation();
				printf("\n\t\t\t    Reservation canceled successfully!\n");
				system("pause");
				}
				else{
					printf("\n\t\t\t    Reservation not canceled!\n");
					system("pause");
				}
			}
			else{
				printf("\nInvalid username or PIN!\n");
				system("pause");
			}
		}
		else{
			printf("\nInvalid reservation number!\n");
			system("pause");
			}
			break;
		}

			case 'E':
			case 'e':{
				printf("Enter the number of the reservation to edit: ");
				int res_num;
				scanf("%d", &res_num);
				getchar();

				if(res_num >= 1 && res_num <= num_reservations) {
					res_num--;
					char username[50];
					printf("Enter username: ");
					gets(username);

					char pin[10];
					printf("Enter pin: ");
					gets(pin);
					getchar();

				if(strcmp(username, reservation[res_num].username) == 0 &&
					strcmp(pin, reservation[res_num].pin) == 0){
					system("cls");
					printf("================================================================================");
					printf("Reservation Details:\n");
					printf("================================================================================");
					printf("\tName: %s\n", reservation[res_num].name);
					printf("\tAddress: %s\n", reservation[res_num].address);
					printf("\tAge: %d\n", reservation[res_num].age);
					printf("\tPhone: %s\n", reservation[res_num].phone);
					printf("\tEmail: %s\n", reservation[res_num].email);
					printf("--------------------------------------------------------------------------------");
					printf("\tConcert Name: %s\n", reservation[res_num].concert_name);
					printf("\tDate: %s\n", reservation[res_num].date);
					printf("\tTime: %s\n", reservation[res_num].time);
					printf("\tPlace: %s\n", reservation[res_num].place);
					printf("\tSeat Plan: %s\n", reservation[res_num].seatPlan);
					printf("\tTicket Price: %.2lf\n", reservation[res_num].ticketPrice);
					printf("\tQuantity: %d\n", reservation[res_num].quantity);
					printf("\tTotal Price: %.2lf\n", reservation[res_num].totalPrice);
					printf("\tPayment Method: %s\n", reservation[res_num].paymentMethod);
					printf("--------------------------------------------------------------------------------");

				char choice;
				printf("What would you like to change?\n");
				printf("[1] Name\t[3] Age\t\t[5] Email\t[7] Quantity\t[8] Exit\n");
				printf("[2] Address\t[4] Phone\t[6] Seat Plan\t* Enter your choice: ");
				scanf("%c", &choice);
				getchar();

				struct user_res update;
				char confirm;

				switch (choice){
				case '1':
					printf("Enter new name: ");
					gets(update.name);
					printf("Are you sure you want to save the changes (Y/N)? ");
					scanf("% c",&confirm);
					getchar();
					if(confirm == 'y' || confirm == 'Y'){
						reservation[res_num] = update;
						save_reservation();
						}
					else{ return; }
					break;


				case '2':
					printf("Enter new address: ");
					gets(update.address);
					printf("Are you sure you want to save the changes (Y/N)? ");
					scanf(" %c",&confirm);
					getchar();
					if(confirm == 'y' || confirm == 'Y'){
						reservation[res_num] = update;
						save_reservation();
						}
					else{ return; }
					break;

				case '3':
					printf("Enter new age: ");
					scanf("%d", &update.age);
					if(update.age < 18){
						printf("\tUsers must be 18 years old above");
						getchar();
						return;
					}
					else{
						printf("Are you sure you want to save the changes (Y/N)? ");
						scanf(" %c",&confirm);
						getchar();
						if(confirm == 'y' || confirm == 'Y'){
							reservation[res_num] = update;
							save_reservation();
						}
					else{ return; }
					}
					break;

				case '4':
					int valid, duplicate;
					printf("Enter new phone number: ");
					gets(update.phone);

					duplicate = check_duplicate(update.phone);
					valid = valid_input(update.phone);

					if(duplicate == 1) {
						printf("\tThe phone number is already in use. Please enter another one.");
						return;
					}
					else if(valid == 1) {
						printf("\tInvalid phone number. Please enter 11 digits.");
						return;
					}
					else if (valid == 2) {
						printf("\tInvalid input. Make sure to input your phone number.");
						return;
					}
					else{
						printf("Are you sure you want to save the changes (Y/N)? ");
						scanf(" %c",&confirm);
						if(confirm == 'y' || confirm == 'Y'){
							reservation[res_num] = update;
							save_reservation();
						}
						else{
							return;
						}
					}
					break;

				case '5':
					printf("Enter new email: ");
					gets(update.email);
					duplicate = check_duplicate(update.email);
					if(duplicate == 2){
						printf("\tA reservation with the same email already exists!");
						return;
					}
					else{
						printf("Are you sure you want to save the changes (Y/N)? ");
						scanf(" %c",&confirm);
						if(confirm == 'y' || confirm == 'Y'){
							reservation[res_num] = update;
							save_reservation();
						}
						else{
							return;
						}
					}
					break;

				case '6':

					strcpy(concerts[0].concert_name, "Black Pink: BORN PINK World Tour Manila");
					strcpy(concerts[0].date, "Dec 28 2023");
					strcpy(concerts[0].time, "8:30 PM");
					strcpy(concerts[0].place, "Philippine Arena");
					concerts[0].svipPrice = 200.0;
					concerts[0].vipPrice = 150.0;
					concerts[0].upperBoxPrice = 100.0;
					concerts[0].lowerBoxPrice = 80.0;
					concerts[0].standingPrice = 50.0;

					strcpy(concerts[1].concert_name, "Twice: READY TO BE");
					strcpy(concerts[1].date, "August 5 2023");
					strcpy(concerts[1].time, "7:30 PM");
					strcpy(concerts[1].place, "Philippine Arena");
					concerts[1].svipPrice = 300.0;
					concerts[1].vipPrice = 200.0;
					concerts[1].upperBoxPrice = 150.0;
					concerts[1].lowerBoxPrice = 100.0;
					concerts[1].standingPrice = 70.0;

					strcpy(concerts[2].concert_name, "SB19: PAGTATAG World Tour");
					strcpy(concerts[2].date, "October 25 2023");
					strcpy(concerts[2].time, "8:00 PM");
					strcpy(concerts[2].place, "Araneta Coliseum");
					concerts[2].svipPrice = 400.0;
					concerts[2].vipPrice = 300.0;
					concerts[2].upperBoxPrice = 200.0;
					concerts[2].lowerBoxPrice = 150.0;
					concerts[2].standingPrice = 100.0;

					strcpy(concerts[3].concert_name, "Backstreet Boys: DNA World Tour 2023");
					strcpy(concerts[3].date, "July 28 2023");
					strcpy(concerts[3].time, "7:00 PM");
					strcpy(concerts[3].place, "Philippine Arena");
					concerts[3].svipPrice = 250.0;
					concerts[3].vipPrice = 200.0;
					concerts[3].upperBoxPrice = 120.0;
					concerts[3].lowerBoxPrice = 90.0;
					concerts[3].standingPrice = 60.0;

					strcpy(concerts[4].concert_name, "One Direction: THE COMEBACK");
					strcpy(concerts[4].date, "September 20 2023");
					strcpy(concerts[4].time, "7:30 PM");
					strcpy(concerts[4].place, "Araneta Coliseum");
					concerts[4].svipPrice = 350.0;
					concerts[4].vipPrice = 300.0;
					concerts[4].upperBoxPrice = 180.0;
					concerts[4].lowerBoxPrice = 150.0;
					concerts[4].standingPrice = 80.0;

					int concert_index;
					for(concert_index = 0; concert_index < 5; concert_index++){
						if(strcmp(reservation[res_num].concert_name, concerts[concert_index].concert_name) == 0){
							break;
						}
					}

					int seatChoice;
					do{
					system("cls");
					printf("\nCurrent seat plan: %s\n", reservation[res_num].seatPlan);
					printf("================================================================================");
					printf("Seat Plan and Prices for %s\n", concerts[concert_index].concert_name);
					printf("================================================================================");
					printf("\t1. SVIP - $%.2lf\n", concerts[concert_index].svipPrice);
					printf("\t2. VIP - $%.2lf\n", concerts[concert_index].vipPrice);
					printf("\t3. Upper Box - $%.2lf\n", concerts[concert_index].upperBoxPrice);
					printf("\t4. Lower Box - $%.2lf\n", concerts[concert_index].lowerBoxPrice);
					printf("\t5. Standing - $%.2lf\n", concerts[concert_index].standingPrice);
					printf("--------------------------------------------------------------------------------\n");

					printf("Enter ticket type number to update seat plan: ");
					scanf("%d", &seatChoice);
					}while (seatChoice < 1 || seatChoice > 5);

					switch(seatChoice){
					case 1:
						strcpy(update.seatPlan, "SVIP");
						update.ticketPrice = concerts[concert_index].svipPrice;
						break;
					case 2:
						strcpy(update.seatPlan, "VIP");
						update.ticketPrice = concerts[concert_index].vipPrice;
						break;
					case 3:
						strcpy(update.seatPlan, "UPPERBOX");
						update.ticketPrice = concerts[concert_index].upperBoxPrice;
						break;
					case 4:
						strcpy(update.seatPlan, "LOWERBOX");
						update.ticketPrice = concerts[concert_index].lowerBoxPrice;
						break;
					case 5:
						strcpy(update.seatPlan, "STANDING");
						update.ticketPrice = concerts[concert_index].standingPrice;
						break;
					}


					printf("Enter quantity: ");
					scanf("%d",&update.quantity);
					update.totalPrice = update.ticketPrice * update.quantity;
					getchar();
					printf("\n================================================================================");
					printf("Seat plan updated successfully!\n");
					printf("================================================================================");
					printf("New Seat Plan: %s\n", update.seatPlan);
					printf("Ticket Price: $%.2lf\n", update.ticketPrice);
					printf("Quantity: %d\n", update.quantity);
					printf("Total Price: $%.2lf\n", update.totalPrice);
					printf("--------------------------------------------------------------------------------");
					printf("Are you sure you want to save the changes (Y/N)? ");
					scanf(" %c",&confirm);
					if(confirm == 'y' || confirm == 'Y'){
						reservation[res_num] = update;
						save_reservation();
						}
					else{ return; }
					break;

				case '7':
					printf("Enter new quantity: ");
					scanf("%d", &update.quantity);
					getchar();
					update.totalPrice = update.ticketPrice * update.quantity;
					printf("Are you sure you want to save the changes (Y/N)? ");
					scanf(" %c",&confirm);
					if(confirm == 'y' || confirm == 'Y'){
						reservation[res_num] = update;
						save_reservation();
						}
					else{ return; }
					break;
				case '8':
					return;
				default:
					printf("Invalid choice. No changes made.\n");
					break;
				}

			}
			else{
				printf("\nInvalid username or PIN!\n");
				system("pause");
			}
			}
				else{
			printf("\nInvalid reservation number!\n");
			system("pause");
			}
			break;
		}
			case 'Q':
			case 'q':
				return;
			default:
				printf("\nInvalid choice! Please try again.\n");
				system("pause");
			}

		start_index = (page - 1) * 10;
		end_index = start_index + 10;
	}
}


int main() {
	load_reservation();
	int choice;
	while(1) {
	system("cls");
	printf("\n\n\n\n\n\t\t     * CONCERT TICKET RESERVATION SYSTEM * \n\n");
	printf("\t\t\t===============================\n");
	printf("\t\t\t| MENU:                       |\n");
	printf("\t\t\t===============================\n");
	printf("\t\t\t|   1. Make Reservation       |\n");
	printf("\t\t\t|   2. View All Reservations  |\n");
	printf("\t\t\t|   3. Exit                   |\n");
	printf("\t\t\t===============================\n");
	printf("\n\t\t\tEnter your choice: ");
	scanf("%d", &choice);

	switch(choice) {
	    case 1:
		make_reservation();
		break;
	    case 2:
		view_all();
		break;
	    case 3:
		printf("Exiting program...\n");
		exit(0);
	    default:
		printf("\t\t\tInvalid choice. Please try again.\n");
	}

	printf("\n\t\t\tPress Enter to continue...");
	getchar();
	getchar();
    }
}
