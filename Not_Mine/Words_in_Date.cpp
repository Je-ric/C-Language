#include <stdio.h>

#include <string.h>

#include <stdlib.h>
void PrintInWords(int value);
int CheckDateFormat(int day, int month);
main()
{
    int i = 0, j, year, day, mnth, k = 0, checkYear, assignMonth[12], noOfDays = 0, checkFormat;
    char str[10], split, substr[3][4], *month[] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter Date in dd-mm-yyyy or dd/mm/yyyy format like 01-02-1018\n");
    gets(str);
    if (str[2] == '-')
    {
        split = '-';
    }
    else if (str[2] == '/')
    {
        split = '/';
    }
    else
    {
        printf("Enter Date Format in dd/mm/yyyy or dd-mm-yyyy if 1 is there enter 01\n");
        exit(0);
    }
    // Splitting entered date into day,month,year while(str[k]!='\0')
    {
        j = 0;
        while (str[k] != split && str[k] != '\0')
        {
            substr[i][j] = str[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        i++;
        if (str[k] != '\0')
        {
            k++;
        }
    }
    day = atoi(substr[0]);
    mnth = atoi(substr[1]);
    year = atoi(substr[2]);
    int chkDate = CheckDateFormat(day, mnth);
    if (chkDate == 1)
    {
        PrintInWords(day);
        printf(", %s ,", month[mnth]);
        PrintInWords(year);
        printf("\n");
    }
    else
    {
        printf("Enter Valid Date Format\n");
    }
}
void PrintInWords(int value)
{
    int i, j, k = 0, count, a[10];
    char *ones[] =
        {
            "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *temp[] =
        {
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] =
        {
            "-", "-", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    while (value > 0)
    {
        i = value % 10;
        a[k] = i;
        k++;
        value /= 10;
    }
    // Here if 12345 is given then a[0]=5,a[1]=4 and soon then last but one digit will be at a[1] int totalDigits=k-1;
    if (totalDigits < 6)
    {
        for (i = totalDigits; i >= 0; i--)
        {
            if (i == 5 && a[i] != 0)
            {
                printf("%s lakh ", ones[a[i]]);
            }
            if (i == 4 || i == 3)
            {
                // Start if(i==4 && a[i]==0)
                {
                    printf("%s thousand ", ones[a[i - 1]]);
                    i--;
                }
                else if (i == 4 && a[i] == 1)
                {
                    printf("%s thousand ", temp[a[i - 1]]);
                    i--;
                }
                else if (i == 4)
                {
                    printf("%s ", tens[a[i]]);
                }
                else
                {
                    printf("%s thousand ", ones[a[i]]);
                }
                // end
            }
            if (i == 2 && a[i] != 0)
            {
                printf("%s hundred and ", ones[a[i]]);
            }
            if (i == 2 && a[i] == 0)
            {
                printf("and ");
            }
            if (i == 1 || i == 0)
            {
                if (i == 1 && a[i] == 0)
                {
                    printf("%s ", ones[a[i - 1]]);
                    i--;
                    break;
                }
                if (i == 1 && a[i] == 1)
                {
                    printf("%s ", temp[a[i - 1]]);
                    i--;
                    break;
                }
                if (i == 1 && a[i] != 1 && a[i] != 0)
                {
                    printf("%s ", tens[a[i]]);
                }
                if (i == 0 && a[i] != 0)
                {
                    printf("%s ", ones[a[i]]);
                }
            }
        }
    }
}
int CheckDateFormat(int day, int month)
{
    int i;
    // Checking day if(day<=31&&day>=1&&month<=12&&month>=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
