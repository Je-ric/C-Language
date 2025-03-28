#include<stdio.h>
#include<conio.h>

int main(){
    clrscr();
    int choice;
    
    printf("[1] Multiplication of each single digit\n");
    printf("[2] Addition of each single digit\n");
    printf("Select type: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            {
                int n1, b1, pro = 1;
                
                printf("Enter any number: ");
                scanf("%d", &n1);

                // Handling negative numbers
                if(n1 < 0) {
                    n1 = -n1; // Convert to positive
                    printf("Converted to positive for multiplication\n");
                }

                do {
                    b1 = n1 % 10;
                    pro = pro * b1;
                    n1 = n1 / 10;
                } while(n1 != 0);

                printf("Total multiply of digits = %d", pro);
            }
            break;

        case 2:
            {
                int n2, b2, sum = 0;
                
                printf("Enter any number: ");
                scanf("%d", &n2);

                // Handling negative numbers
                if(n2 < 0) {
                    n2 = -n2; // Convert to positive
                    printf("Converted to positive for addition\n");
                }

                do {
                    b2 = n2 % 10;
                    sum = sum + b2;
                    n2 = n2 / 10;
                } while(n2 != 0);

                printf("Total sum of digits = %d", sum);
            }
            break;

        default:
            printf("Invalid choice");
    }

    getch();
    return 0;
}
