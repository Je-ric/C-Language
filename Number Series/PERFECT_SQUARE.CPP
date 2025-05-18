#include<stdio.h>
#include<conio.h>

int main() {
    clrscr();
    int option, i, number, n;

    printf("[1] Print perfect numbers between given numbers\n");
    printf("[2] Print perfect numbers upto (n)\n");
    printf("[3] Check if a specific number is a perfect number\n");
    printf("Option: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            {
                int start, end;
                
                printf("Enter the range (start end): ");
                scanf("%d %d", &start, &end);

                printf("Perfect numbers between %d and %d are: ", start, end);
                for(i = start; i <= end; i++) {
                    int sum = 0;
                    for(int j = 1; j < i; j++) {
                        if(i % j == 0)
                            sum += j;
                    }
                    if(sum == i)
                        printf("%d ", i);
                }
                break;
            }

        case 2:
            {
                printf("Enter the value of n: ");
                scanf("%d", &n);

                printf("Perfect numbers upto %d are: ", n);
                for(i = 1; i <= n; i++) {
                    int sum = 0;
                    for(int j = 1; j < i; j++) {
                        if(i % j == 0)
                            sum += j;
                    }
                    if(sum == i)
                        printf("%d ", i);
                }
                break;
            }

        case 3:
            {
                printf("Enter a number to check for perfect square : ");
                scanf("%d", &number);

                for(i = 0; i <= number; i++) {
                    if(number == i * i) {
                        printf("Entered number is a perfect square\n");
                        return 0;
                    }
                }
                printf("Entered number is not a perfect square\n");
                break;
            }

        default:
            printf("Invalid option");
    }

    getch();
    return 0;
}
