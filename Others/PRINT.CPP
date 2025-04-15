#include<stdio.h>
#include<conio.h>

void printNumbers(int type) {
    int n, i;
    switch(type) {
        case 1:
            printf("[Print 1 to N]\n\n");
            printf("Enter any number: ");
            scanf("%d", &n);
            printf("Natural numbers from 1 to %d are: ", n);
	    for(i = 1; i <= n; i++) {
		printf("%d ", i);
	    }
	    break;
	case 2:
	    printf("[Print N to 1]\n\n");
	    printf("Enter any number: ");
	    scanf("%d", &n);
	    printf("Natural numbers from %d to 1 in reverse order are: ", n);
	    for(i = n; i >= 1; i--) {
		printf("%d ", i);
	    }
	    break;
	default:
	    printf("Invalid option.\n");
    }
}

void printAlphabets() {
	int i;
	char c;
    printf("[Print A-Z and a-z using ASCII]\n\n");
    for(i = 65; i <= 90; i++) {
	printf("%c ", i);
    }
    printf("\n\n");
    for(i = 97; i <= 122; i++) {
	printf("%c ", i);
    }

    printf("\n\n[Print A-Z and a-z]\n\n");
    for(c = 'A'; c <= 'Z'; c++) {
	printf("%c ", c);
    }
    printf("\n\n");
    for(c = 'a'; c <= 'z'; c++) {
	printf("%c ", c);
    }
}

void determineAlphabet(char x) {
    printf("[Determine if an Alphabet or Not]\n\n");
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
        printf("%c is an alphabet.\n", x);
    } else {
        printf("%c is not an alphabet.\n", x);
    }
}

void determineCharacter(char input) {
    printf("[Determine if Vowel, Consonant, Digit or a Special character]\n\n");
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        switch(input) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                printf("%c is a vowel.\n", input);
                break;
            default:
                printf("%c is a consonant.\n", input);
        }
        printf("This is an alphabet.\n");
    } else if(input >= '0' && input <= '9') {
        printf("This is a digit.\n");
    } else {
        printf("This is a special character.\n");
    }
}

int main() {
    clrscr();
    int choice;
    char c;

    printf("[1] Print 1 to N\n");
    printf("[2] Print N to 1\n");
    printf("[3] Print A-Z and a-z\n");
    printf("[4] Determine if an Alphabet or Not\n");
    printf("[5] Determine if Vowel, Consonant, Digit or a Special character\n");
    printf("Select option: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        case 2:
            printNumbers(choice);
            break;
        case 3:
            printAlphabets();
            break;
        case 4:
            printf("Enter a character: ");
            scanf(" %c", &c);
            determineAlphabet(c);
            break;
        case 5:
            printf("Enter a character: ");
            scanf(" %c", &c);
            determineCharacter(c);
            break;
        default:
            printf("Invalid option.\n");
    }

    getch();
    return 0;
}
