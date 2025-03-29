#include <stdio.h>

#include <string.h>

#include <stdlib.h>
char GetSplitCharacter(char date[10]);
void GetSplittedDate(char split, int *day, int *month, int *year, char date[10]);
int CheckLeapyear(int year);
int CheckDateFormat(int day, int month, int year, int checkyear, int *assignMonth);
void AssignMonthsForYear(int assignMonth[12], int checkYear);
void PrintDifferenceOfDates(int day1, int mnth1, int year1, int day2, int mnth2, int year2, int *assignMonthYear1, int *assignMonthYear2);
int GetDaysFromYears(int year1, int year2);
int GetNoOfDaysFromGivenMonthforYear1(int day1, int mnth1, int *assignMonthYear1);
int GetNoOfDaysFromJanforYear2(int day2, int mnth2, int *assignMonthYear2);
main()
{
    int i = 0, j, year1, day1, mnth1, year2, day2, mnth2, k = 0, checkYear, assignMonthYear1[13], assignMonthYear2[13], noOfDays = 0, checkFormat;
    char date1[10], date2[10], split1, split2, dateSubstr1[3][4], dateSubstr2[3][4];
    printf("Enter Date 1 in dd-mm-yyyy or dd/mm/yyyy format like 01-02-1018\n");
    gets(date1);
    split1 = GetSplitCharacter(date1);
    printf("Enter Date 2 in dd-mm-yyyy or dd/mm/yyyy format like 01-02-1018\n");
    gets(date2);
    split2 = GetSplitCharacter(date2);
    GetSplittedDate(split1, &day1, &mnth1, &year1, date1);
    GetSplittedDate(split2, &day2, &mnth2, &year2, date2);
    checkYear = CheckLeapyear(year1);
    for (i = 0; i < 12; i++)
    {
        assignMonthYear1[i] = 0;
        assignMonthYear2[i] = 0;
    }
    AssignMonthsForYear(assignMonthYear1, checkYear);
    int flagChkDateFormat = CheckDateFormat(day1, mnth1, year1, checkYear, assignMonthYear1);
    if (flagChkDateFormat == 0)
    {
        printf("Enter Valid Date 1\n");
        exit(0);
    }
    checkYear = CheckLeapyear(year2);
    AssignMonthsForYear(assignMonthYear2, checkYear);
    flagChkDateFormat = CheckDateFormat(day2, mnth2, year2, checkYear, assignMonthYear2);
    if (flagChkDateFormat == 0)
    {
        printf("Enter Valid Date 2\n");
        exit(0);
    }
    PrintDifferenceOfDates(day1, mnth1, year1, day2, mnth2, year2, assignMonthYear1, assignMonthYear2);
}
char GetSplitCharacter(char date[10])
{
    char split;
    if (date[2] == '-')
    {
        split = '-';
    }
    else if (date[2] == '/')
    {
        split = '/';
    }
    else
    {
        printf("Enter Date Format in dd/mm/yyyy or dd-mm-yyyy if 1 is there enter 01\n");
        exit(0);
    }
    return (split);
}
void GetSplittedDate(char split, int *day, int *month, int *year, char date[10])
{
    int i = 0, j, k = 0;
    char substr[3][4];
    while (date[k] != '\0')
    {
        j = 0;
        while (date[k] != split && date[k] != '\0')
        {
            substr[i][j] = date[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        i++;
        if (date[k] != '\0')
        {
            k++;
        }
    }
    *day = atoi(substr[0]);
    *month = atoi(substr[1]);
    *year = atoi(substr[2]);
}
int CheckLeapyear(int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
    else if (year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int CheckDateFormat(int day, int month, int year, int checkyear, int *assignMonth)
{
    int i;
    // Checking day
    if (day <= assignMonth[month] && day >= 1 && month <= 12 && month >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void AssignMonthsForYear(int assignMonth[13], int checkYear)
{
    int i;
    for (i = 1; i <= 12; i++)
    {
        if (i < 8)
        {
            if (i % 2 != 0)
            {
                assignMonth[i] = 31;
            }
            if (i % 2 == 0 && i != 2)
            {
                assignMonth[i] = 30;
            }
        }
        if (i > 8)
        {
            if (i % 2 != 0)
            {
                assignMonth[i] = 30;
            }
            if (i % 2 == 0 && i != 2)
            {
                assignMonth[i] = 31;
            }
        }
        if (i == 2)
        {
            if (checkYear == 1)
            {
                assignMonth[i] = 29;
            }
            else
            {
                assignMonth[i] = 28;
            }
        }
        if (i == 8)
        {
            assignMonth[i] = 31;
        }
    }
}
void PrintDifferenceOfDates(int day1, int mnth1, int year1, int day2, int mnth2, int year2, int *assignMonthYear1, int *assignMonthYear2)
{
    int i, noOfDaysBetweenyears, noOfDays2, noOfDays1, totalNoOfDays;
    // Not considering year1 and year2
    noOfDaysBetweenyears = GetDaysFromYears(year1, year2);
    noOfDays1 = GetNoOfDaysFromGivenMonthforYear1(day1, mnth1, assignMonthYear1);
    // No need to pass year since we have already assigned months for given year
    noOfDays2 = GetNoOfDaysFromJanforYear2(day2, mnth2, assignMonthYear2);
    if (year1 != year2)
    {
        totalNoOfDays = noOfDaysBetweenyears + noOfDays1 + noOfDays2;
    }
    else
    {
        if (CheckLeapyear(year1))
            totalNoOfDays = 366 - (noOfDays1 + noOfDays2);
        else
            totalNoOfDays = 365 - (noOfDays1 + noOfDays2);
        if (totalNoOfDays < 0)
            totalNoOfDays *= -1;
    }
    printf("Including start day and end day from %d-%d-%d to %d-%d-%d \nTotal Number of Days = %d\n", day1, mnth1, year1, day2, mnth2, year2, totalNoOfDays);
    int totalWeeks = 0;
    for (i = 1; i <= totalNoOfDays; i++)
    {
        if (i % 7 == 0)
        {
            totalWeeks += 1;
        }
    }
    printf("Total Weeks and days= %d weeks and %d days\n", totalWeeks, (totalNoOfDays - (totalWeeks * 7)));
}
int GetDaysFromYears(int year1, int year2)
{
    int noOfDays = 0, i;
    // skipping year1 and year2
    for (i = year1 + 1; i < year2; i++)
    {
        int chkLeapYear = CheckLeapyear(i);
        if (chkLeapYear == 1)
        {
            noOfDays += 366;
        }
        else
        {
            noOfDays += 365;
        }
    }
    return (noOfDays);
}
int GetNoOfDaysFromJanforYear2(int day2, int mnth2, int *assignMonthYear2)
{
    int noOfDays = 0, i;
    for (i = 1; i <= 12; i++)
    {
        if (i < mnth2)
        {
            noOfDays += assignMonthYear2[i];
        }
        if (i == mnth2)
        {
            noOfDays += day2;
        }
        if (i > mnth2)
        {
            break;
        }
    }
    return (noOfDays);
}
int GetNoOfDaysFromGivenMonthforYear1(int day1, int mnth1, int *assignMonthYear1)
{
    int noOfDays = 0, i;
    // removing old days from given day from totaldays in the given month and adding the present day or day1
    noOfDays += assignMonthYear1[mnth1] - day1 + 1;
    for (i = mnth1 + 1; i <= 12; i++)
    {
        noOfDays += assignMonthYear1[i];
    }
    return (noOfDays);
}
