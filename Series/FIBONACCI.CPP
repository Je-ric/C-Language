#include<stdio.h>
//#include<conio.h>

int Fibonacci(int n);

int main() {
    //clrscr();
    int choice, n, i, c;

    printf("[Fibonacci Series]\n");
    printf("[1] Print Fibonacci numbers between given numbers\n");
    printf("[2] Print Fibonacci numbers upto (n)\n");
    printf("[3] Check if a specific number is part of Fibonacci or not\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                int start, end;
                printf("Enter the starting number: ");
                scanf("%d", &start);
                printf("Enter the ending number: ");
                scanf("%d", &end);
                printf("Fibonacci numbers between %d and %d are: ", start, end);
                i = 0;
                while (Fibonacci(i) <= end) {
                    if (Fibonacci(i) >= start)
                        printf("%d ", Fibonacci(i));
                    i++;
                }
                break;
            }
        case 2:
            {
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("First %d terms of Fibonacci series are: ", n);
                for (c = 1; c <= n; c++) {
                    printf("%d ", Fibonacci(i));
                    i++;
                }
                break;
            }
        case 3:
            {
                int num;
                printf("Enter a number to check if it's Fibonacci: ");
                scanf("%d", &num);
                int fib = Fibonacci(num);
                if (fib == num)
                    printf("%d is a Fibonacci number.", num);
                else
                    printf("%d is not a Fibonacci number.", num);
                break;
            }
        default:
            printf("Invalid choice!");
    }
    //getch();
    return 0;
}

int Fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}
