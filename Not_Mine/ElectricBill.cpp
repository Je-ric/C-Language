#include <stdio.h>
void PrintBill(float units, float a[5], float extraCharge, char firstName[100], char lastName[100], int range[8]);
main()
{
    int i, choice;
    float units, extraCharge, totalBill, sum = 0.0;
    char firstName[100], lastName[100];
    printf("Enter\n1.To Calculate electricity of your own custom values\n2.To use Predefined values\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int k = 0;
        float a[5];
        int range[8] =
            {
                1, 50, 51, 100, 101, 200, 201, 300};
        printf("Enter First Name\n");
        fflush(stdin);
        gets(firstName);
        printf("Enter Last Name\n");
        fflush(stdin);
        gets(lastName);
        for (i = 0; i < 5; i++)
        {
            if (k < 7)
                printf("Enter Cost/Unit for %d - %d units\n", range[k], range[k + 1]);
            else
                printf("Enter Cost/Unit for >300 units\n");
            scanf("%f", &a[i]);
            k += 2;
        }
        printf("Enter Extra Charge\n");
        scanf("%f", &extraCharge);
        printf("Enter Total Number of Units used/consumed\n");
        scanf("%f", &units);
        PrintBill(units, a, extraCharge, firstName, lastName, range);
        break;
    }
    case 2:
    {
        int k = 0;
        int range[8] =
            {
                1, 50, 51, 100, 101, 200, 201, 300};
        float a[5] =
            {
                1.2, 3, 3.3, 4.1, 5.2};
        extraCharge = 3.5;
        printf("Enter First Name\n");
        fflush(stdin);
        gets(firstName);
        printf("Enter Last Name\n");
        fflush(stdin);
        gets(lastName);
        printf("Enter Total Number of Units used/consumed\n");
        scanf("%f", &units);
        PrintBill(units, a, extraCharge, firstName, lastName, range);
        break;
    }
    default:
    {
        printf("Enter Valid Choice\n");
    }
    }
}
void PrintBill(float units, float a[5], float extraCharge, char firstName[100], char lastName[100], int range[8])
{
    float sum = 0.0, totalBill;
    int k, i;
    if (units >= 1 && units <= 50)
    {
        sum = units * a[0];
    }
    else if (units >= 51 && units <= 100)
    {
        sum = (50 * a[0]) + ((units - 50) * a[1]);
        printf("sum (50*a[0])+((units-50)*a[1])= %f", (50 * a[0]));
    }
    else if (units >= 101 && units <= 200)
    {
        sum = (50 * a[0]) + (50 * a[1]) + ((units - 100) * a[2]);
    }
    else if (units >= 201 && units <= 300)
    {
        sum = (50 * a[0]) + (50 * a[1]) + (100 * a[2]) + ((units - 200) * a[3]);
    }
    else
    {
        sum = (50 * a[0]) + (50 * a[1]) + (100 * a[2]) + (100 * a[3]) + ((units - 300) * a[4]);
    }
    totalBill = sum + (extraCharge * sum);
    printf("\n\n******************Hi %s %s*********************\n\n******Your Electricity Bill*********\n", firstName, lastName);
    printf("\n Unit Range Cost\n");
    k = 0;
    for (i = 0; i < 5; i++)
    {
        if (k < 7)
            printf("%9d - %d", range[k], range[k + 1]);
        else
            printf(" >300 ");
        if (i != 0 && i != 4)
            printf("%15.2f\n", a[i]);
        else
            printf("%16.2f\n", a[i]);
        k += 2;
    }
    printf("\nSum=%f\n", sum);
    printf("Collecting Extra Charge of %f on total amount of %f\n", extraCharge, sum);
    printf("\nTotal Amount Costed=%f\n", totalBill);
}
