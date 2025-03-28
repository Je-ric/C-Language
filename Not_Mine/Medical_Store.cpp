#include <stdio.h>

#include <conio.h>

#include <string.h>

#include <ctype.h>
struct Medicine
{
    int id, price, quantity;
    char medicneName[100], Company[100], Mfg_Date[11], Exp_Date[11], info[5000];

} m[100];
void PurchaseMedicine(int number);
void EnterInfoAboutMedicine(int number);
void StockOfMedicine(int number);
void KnowInfoAboutMedicine(int number);
void AddMedicineinStore(int number, struct Medicine m[]);
void DeleteMedicineStore(int number);
void ChangeMedicineDetails(int number);
main()
{
    int i, j, choice, number = 0, c;
    for (i = 0; i < 100; i++)
    {
        m[i].id = 0;
        m[i].price = 0;
        m[i].quantity = 0;
        strcpy(m[i].Mfg_Date, "");
        strcpy(m[i].Exp_Date, "");
        strcpy(m[i].medicneName, "");
        strcpy(m[i].Company, "");
        strcpy(m[i].info, "");
    }
    m[0].id = 1;
    m[0].price = 120;
    m[0].quantity = 30;
    strcpy(m[0].Mfg_Date, "23-04-2016");
    strcpy(m[0].Exp_Date, "24-04-2020");
    strcpy(m[0].medicneName, "Paracetmol");
    strcpy(m[0].Company, "ABCD");
    strcpy(m[0].info, "Good Medicine for Fever");
    do
    {
        printf("Enter\n1 - Purchase Medicine\n2 - Enter Information about a Medicine\n3 - Stock of Medicine in Store\n4 - Medicine Information\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change Quantity of Medicine\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            PurchaseMedicine(number + 1);
            break;
        }
        case 2:
        {
            EnterInfoAboutMedicine(number + 1);
            break;
        }
        case 3:
        {
            StockOfMedicine(number + 1);
            break;
        }
        case 4:
        {
            KnowInfoAboutMedicine(number + 1);
            break;
        }
        case 5:
        {
            ++number;
            AddMedicineinStore(number, m);
            break;
        }
        case 6:
        {
            DeleteMedicineStore(number + 1);
            break;
        }
        case 7:
        {
            ChangeMedicineDetails(number + 1);
            break;
        }
        }
        printf("To Continue with other Options Enter 1 Else any other number\n");
        scanf("%d", &c);

    } while (c == 1);
}
void PurchaseMedicine(int number)
{
    int id, check, i, quantity, flag = 0;
    char name[100];
    printf("Enter 1 if you know ID else any other number to enter Name of Medicine\n");
    fflush(stdin);
    scanf("%d", &check);
    if (check == 1)
    {
        printf("Enter Id to purchase Medicine\n");
        fflush(stdin);
        scanf("%d", &id);
        for (i = 0; i < number; i++)
        {
            if (m[i].id == id)
            {
                flag = 1;
                int c;
                printf("These are the details of Medicine\n");
                printf("Name%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n", m[i].medicneName, m[i].price, m[i].quantity, m[i].Company, m[i].Mfg_Date, m[i].Exp_Date);
                if (strcmp(m[i].info, "") == 0)
                {
                    printf("Medicine Review/Info=Not Available\n");
                }
                else
                {
                    printf("Medicine Review/Info=%s\n", m[i].info);
                }
                printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n", m[i].medicneName);
                fflush(stdin);
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("Enter Quantity to Purchase\n");
                    scanf("%d", &quantity);
                    if (m[i].quantity > quantity)
                    {
                        printf("Total Price to be paid=%d\n", quantity * m[i].price);
                    }
                    else
                    {
                        printf("Please Enter quantity below Available Quantity\n");
                    }
                }
                break;
            }
        }
        if (flag == 0)
        {
            printf("Entered Id Not Found\n");
        }
    }
    else
    {
        printf("Enter Name to search and Purchase\n");
        fflush(stdin);
        gets(name);
        for (i = 0; i < number; i++)
        {
            if (strcmp(m[i].medicneName, name) == 0)
            {
                flag = 1;
                int c;
                printf("These are the details of Medicine\n");
                printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n", m[i].medicneName, m[i].price, m[i].quantity, m[i].Company, m[i].Mfg_Date, m[i].Exp_Date);
                if (strcmp(m[i].info, "") == 0)
                {
                    printf("Medicine Review/Info=Not Available\n");
                }
                else
                {
                    printf("Medicine Review/Info=%s\n", m[i].info);
                }
                printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n", m[i].medicneName);
                fflush(stdin);
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("Enter Quantity to Purchase\n");
                    scanf("%d", &quantity);
                    if (m[i].quantity > quantity)
                    {
                        printf("Total Price to be paid=%d\n", quantity * m[i].price);
                    }
                    else
                    {
                        printf("Please Enter quantity below Available Quantity\n");
                    }
                }
                break;
            }
        }
        if (flag == 0)
        {
            printf("Entered Name Not Found\n");
        }
    }
}
void EnterInfoAboutMedicine(int number)
{
    int i, flag = 0, c;
    char name[100], info[100];
    printf("Enter Name of the medicine you want to Review or include Info\n");
    fflush(stdin);
    gets(name);
    for (i = 0; i < number; i++)
    {
        if (strcmp(m[i].medicneName, name) == 0)
        {
            flag = 1;
            printf("These are the details of Medicine\n");
            printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n", m[i].medicneName, m[i].price, m[i].quantity, m[i].Company, m[i].Mfg_Date, m[i].Exp_Date);
            if (strcmp(m[i].info, "") != 0)
            {
                printf("Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number\n");
                fflush(stdin);
                scanf("%d", &c);
            }
            else
            {
                printf("Enter review(less than 100 Characters)\n");
                fflush(stdin);
                gets(m[i].info);
            }
            if (c == 1)
            {
                printf("Enter review(less than 100 Characters)\n");
                fflush(stdin);
                gets(info);
                strcat(m[i].info, "; ");
                strcat(m[i].info, info);
            }
        }
    }
    if (flag == 0)
    {
        printf("Entered Name Not Found\n");
    }
}
void KnowInfoAboutMedicine(int number)
{
    int i, flag = 0;
    char name[100];
    printf("Enter Name of the medicine you want to see Review and Info\n");
    fflush(stdin);
    gets(name);
    for (i = 0; i < number; i++)
    {
        if (strcmp(m[i].medicneName, name) == 0)
        {
            flag = 1;
            printf("These are the details of Medicine\n");
            printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n", m[i].medicneName, m[i].price, m[i].quantity, m[i].Company, m[i].Mfg_Date, m[i].Exp_Date);
            if (strcmp(m[i].info, "") != 0)
            {
                printf("Review or Info=%s\n", m[i].info);
            }
            else
            {
                printf("Review or Info=Not Available\n");
            }
        }
    }
    if (flag == 0)
    {
        printf("Entered Name Not Found\n");
    }
}
void StockOfMedicine(int number)
{
    int i;
    if (number != 0)
    {
        printf("All Available Items are\n");
        for (i = 0; i < number; i++)
        {
            if (m[i].id != 0)
            {
                printf("Id=%d\nName=%s\t\tPrice=%d\tAvailable Quantity=%d\nCompany=%s\t\tMfg Date=%s\tExp Date=%s\n", m[i].id, m[i].medicneName, m[i].price, m[i].quantity, m[i].Company, m[i].Mfg_Date, m[i].Exp_Date);
                if (strcmp(m[i].info, "") != 0)
                {
                    printf("Review or Info=%s\n", m[i].info);
                }
                else
                {
                    printf("Review or Info=Not Available\n");
                }
            }
        }
    }
    else
    {
        printf("No Items or Medicines Available\n");
    }
}
void AddMedicineinStore(int number, struct Medicine m[])
{
    char name[100];
    printf("Enter Medicine Id\n");
    scanf("%d", &(m[number].id));
    fflush(stdin);
    printf("Enter Medicine Name\n");
    fflush(stdin);
    gets(name);
    strcpy(m[number].medicneName, name);
    printf("Enter Company Name\n");
    fflush(stdin);
    gets(m[number].Company);
    printf("Enter Manufactured Date\n");
    fflush(stdin);
    gets(m[number].Mfg_Date);
    printf("Enter Expiry Date\n");
    fflush(stdin);
    gets(m[number].Exp_Date);
    printf("Enter Quantity\n");
    fflush(stdin);
    scanf("%d", &(m[number].quantity));
    printf("Enter Price\n");
    fflush(stdin);
    scanf("%d", &(m[number].price));
    strcpy(m[number].info, "");
    printf("Medicine with id %d Added Successfully\n", m[number].id);
}
void DeleteMedicineStore(int number)
{
    int id, i, flag = 0, num;
    printf("Enter Id to be deleted\n");
    fflush(stdin);
    scanf("%d", &id);
    for (i = 0; i < number; i++)
    {
        if (m[i].id == id)
        {
            flag = 1;
            m[i].id = 0;
            m[i].price = 0;
            m[i].quantity = 0;
            strcpy(m[i].medicneName, "");
            strcpy(m[i].Company, "");
            strcpy(m[i].Mfg_Date, "");
            strcpy(m[i].Exp_Date, "");
            strcpy(m[i].info, "");
            num = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Medicine with %d is Deleted Successfully\n", id);
    }
}
void ChangeMedicineDetails(int number)
{
    int id, quantity, choice, c, i;
    printf("Enter id to change Details\n");
    scanf("%d", &id);
    for (i = 0; i < number; i++)
    {
        if (m[i].id == id && m[i].id != 0)
        {
            do
            {
                printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    int quantity;
                    printf("Enter Quantity to be changed\n");
                    fflush(stdin);
                    scanf("%d", &quantity);
                    m[i].quantity = quantity;
                    printf("Quantity changed Successfully\n");
                }
                if (choice == 2)
                {
                    int price;
                    printf("Enter Price to be changed\n");
                    fflush(stdin);
                    scanf("%d", &price);
                    m[i].price = price;
                    printf("Price changed Successfully\n");
                }
                if (choice == 3)
                {
                    char name[100];
                    printf("Enter Name to be changed\n");
                    fflush(stdin);
                    gets(name);
                    strcpy(m[i].medicneName, name);
                    printf("Medicine Name changed Successfully\n");
                }
                if (choice == 4)
                {
                    char company[100];
                    printf("Enter company to be changed\n");
                    fflush(stdin);
                    gets(company);
                    strcpy(m[i].Company, company);
                    printf("Company changed Successfully\n");
                }
                if (choice == 5)
                {
                    char mfg[11];
                    printf("Enter Manufacturing date to be changed\n");
                    fflush(stdin);
                    gets(mfg);
                    strcpy(m[i].Mfg_Date, mfg);
                    printf("Manufacturing Date changed Successfully\n");
                }
                if (choice == 6)
                {
                    char exp[11];
                    printf("Enter Expiry date to be changed\n");
                    fflush(stdin);
                    gets(exp);
                    strcpy(m[i].Exp_Date, exp);
                    printf("Expiry Date changed Successfully\n");
                }
                if (choice == 7)
                {
                    char info[100];
                    printf("Enter Info to be changed(Less than 100 Characters)\n");
                    fflush(stdin);
                    gets(info);
                    strcpy(m[i].info, info);
                    printf("Info changed Successfully\n");
                }
                if (choice <= 0 && choice > 7)
                {
                    printf("Enter valid Choice\n");
                }
                printf("Enter 1 to Change other Details Else any other number\n");
                fflush(stdin);
                scanf("%d", &c);

            } while (c == 1);
            break;
        }
    }
}
