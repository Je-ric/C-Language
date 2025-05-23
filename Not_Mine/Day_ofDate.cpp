#include <stdio.h>

#include <stdlib.h>

#include <string.h>
char *months[] =
    {
        "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec", "Jan", "Feb"};
char *days[] =
    {
        "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
main()
{
    // Using Zellers Rule f = k + [(13*m-1)/5] + D + [D/4] + [C/4] - 2*C//Ex for 29 Jan 2064//k---day of the month as 29//m-month number as March=1 ..Feb=12,so here it is 11//D--last two digits of year from above it is 64//C--first two digits of year from above it is 20int k,m,D,C,year,i,f,finalday,flag=0;
    char str[3];
    printf("Enter date \n");
    scanf("%d", &k);
    if (k <= 0 || k > 31)
    {
        printf("Invalid Date\n");
        exit(0);
    }
    printf("Enter first 3 letters of month of the year ex:-for January enter Jan\n");
    scanf("%s", str);
    for (i = 0; i < 12; i++)
    {
        if (!strcmp(str, months[i]))
        {
            m = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Invalid Month\n");
        exit(0);
    }
    printf("Enter year\n");
    scanf("%d", &year);
    if (m == 11 || m == 12)
    {
        year = year - 1;
    }
    D = year % 100;
    C = year / 100;
    f = (k + (((13 * m) - 1) / 5) + D + (D / 4) + (C / 4)) - (2 * C);
    if (f >= 0)
    {
        finalday = f % 7;
    }
    else
    {
        finalday = ((f % 7) + 7) % 7;
    }
    printf("The Day for given %d,%s %d is\n%s\n", k, str, year, days[finalday]);
}
