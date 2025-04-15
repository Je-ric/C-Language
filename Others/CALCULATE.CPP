#include <stdio.h>

float calculateInterest() {
    float p, r, n, i;
    printf("Enter the value P: ");
    scanf("%f", &p);
    printf("Enter the value R: ");
    scanf("%f", &r);
    printf("Enter the value N: ");
    scanf("%f", &n);
    i = p * r * n / 100;
    printf("Interest: %f\n", i);
    return i;
}

float calculateNetSalary() {
    float basic, hra, da, pf, netsal, a, b, c;
    printf("Enter the value of basic: ");
    scanf("%f", &basic);
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);
    printf("Enter the value of C: ");
    scanf("%f", &c);
    hra = basic * a;
    da = basic * b;
    pf = basic * c;
    netsal = basic + hra + da + pf;
    printf("Net Salary: %f\n", netsal);
    return netsal;
}

float calculateSalaryWithOvertime() {
    int hours, salary, ot = 0;
    printf("Enter the working hours of the employee: ");
    scanf("%d", &hours);
    if (hours > 200)
        ot = hours - 200;
    salary = 2000 + ot * 100;
    printf("The salary is %d\n", salary);
    return salary;
}

float calculateSalaryBasedOnAge() {
    long int bs;
    int age, bonus;
    printf("Enter the Basic Salary of Employee: ");
    scanf("%ld", &bs);
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 60) {
        bonus = 2500;
    } else {
        bonus = 0;
    }
    float hra = bs * 10 / 100;
    float ta = bs * 20 / 100;
    float da = bs * 15 / 100;
    float gs = bs + hra + ta + da + bonus;
    printf("\n--------------------------------------------------\n");
    printf("BASIC\tHRA\tTA\tDA\tSEN\tBONUS\tGROSS SALARY\n");
    printf("------------------------------------------------\n");
    printf("%ld\t%.2f\t%.2f\t%.2f\t%d\t%d\t%.2fRs\n", bs, hra, ta, da, age, bonus, gs);
    printf("-------------------------------------------------\n");
    return gs;
}

float calculateSimpleInterest() {
    int p, r, t, amount;
    printf("Input principle to find simple interest: ");
    scanf("%d", &p);
    printf("Rate of interest: ");
    scanf("%d", &r);
    printf("Time: ");
    scanf("%d", &t);
    amount = (p * r * t) / 100;
    printf("Simple interest = %d\n", amount);
    return amount;
}

float calculateSalaryWithGender() {
    float salary, bonus;
    char gender;
    printf("Enter M for Male and F for Female: ");
    scanf(" %c", &gender);
    printf("Enter Salary: ");
    scanf("%f", &salary);
    if (gender == 'M' || gender == 'm') {
        if (salary > 10000)
            bonus = salary * 0.05;
        else
            bonus = salary * 0.07;
    } else if (gender == 'F' || gender == 'f') {
        if (salary > 10000)
            bonus = salary * 0.1;
        else
            bonus = salary * 0.12;
    }
    salary += bonus;
    printf("Bonus=%.2f\nSalary=%.2f\n", bonus, salary);
    return salary;
}

void creditDebit() {
    float amt, creditamt, debitamt;
    char ch;
    printf("Enter initial amount: ");
    scanf("%f", &amt);
    printf("Enter\n c for credit\n d for debit\n b for balance\n");
    scanf("\n%c", &ch);

    switch(ch) {
        case 'c':
            printf("Enter credit amount: ");
            scanf("%f", &creditamt);
            amt = amt + creditamt;
            printf("New Amount: %f\n", amt);
            break;
        case 'd':
            printf("Enter debit amount: ");
            scanf("%f", &debitamt);
            if(amt >= debitamt) {
                amt = amt - debitamt;
                printf("New Amount: %f\n", amt);
            } else {
                printf("Insufficient amount\n");
            }
            break;
        case 'b':
            printf("Amount in your account: %f\n", amt);
            break;
        default:
            printf("Invalid input!!\n");
    }
}

void discountBill() {
    int items;
    float discount, bill, price;
    printf("\nEnter the number of items purchased: ");
    scanf("%d", &items);
    printf("Enter the price of items purchased: ");
    scanf("%f", &price);
    bill = items * price;
    printf("\nThe bill before discount: %.2f\n", bill);
    discount = 0.2 * bill;
    printf("The discount is: %.2f\n", discount);
    bill = bill - discount;
    printf("The final bill is: %.2f\n", bill);
}

void grossSalary() {
    float basicPay, dearnessAllowance, houseRentAllowance, grossSalary, providentFund;
    printf("\nEnter Basic Pay: ");
    scanf("%f", &basicPay);
    houseRentAllowance = 0.2 * basicPay;
    dearnessAllowance = 0.4 * basicPay;
    providentFund = 0.12 * basicPay;
    grossSalary = basicPay + dearnessAllowance + houseRentAllowance + providentFund;
    printf("Basic Pay: %.2f\n", basicPay);
    printf("Dearness Allowance: %.2f\n", dearnessAllowance);
    printf("House Rent Allowance: %.2f\n", houseRentAllowance);
    printf("Provident Fund: %.2f\n", providentFund);
    printf("Gross Salary: %.2f\n", grossSalary);
}

int main() {
    int choice;
    float result;
    do {
        printf("\n1. Interest\n2. Net Salary\n3. Salary with overtime\n4. Salary based on age\n5. Simple Interest\n6. Salary with gender\n7. Credit/Debit\n8. Discount Bill\n9. Gross Salary\n10. Exit\n");
        printf("Enter the value of choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = calculateInterest();
                break;
            case 2:
                result = calculateNetSalary();
                break;
            case 3:
                result = calculateSalaryWithOvertime();
                break;
            case 4:
                result = calculateSalaryBasedOnAge();
                break;
            case 5:
                result = calculateSimpleInterest();
                break;
            case 6:
                result = calculateSalaryWithGender();
                break;
            case 7:
                creditDebit();
                break;
            case 8:
                discountBill();
                break;
            case 9:
                grossSalary();
                break;
            case 10:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    } while (1);
}
