#include <stdio.h>

#include <stdlib.h>
main()
{
    char *temp[] =
        {
            "Half", "Ten", "Quarter", "Twenty", "Five", "Minutes", "To", "Past", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "O' Clock"};
    char time[5], substr[3][3];
    int i = 0, j = 0, k = 0, hour, min, s[21] = {0};
    printf("Enter time in HH:MM format like 01:15 in 12 hour format\n");
    gets(time);
    while (time[k] != '\0') // for splitting time
    {
        j = 0;
        while (time[k] != ':' && time[k] != '\0')
        {
            substr[i][j] = time[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        i++;
        if (time[k] != '\0')
        {
            k++;
        }
    }
    int len = i;
    hour = atoi(substr[0]);
    min = atoi(substr[1]);
    if (hour < 1 || hour > 12 || min < 0 || min > 59) // Validating Time
    {
        printf("Enter Valid Time\n");
        exit(0);
    }
    else
    {
        if ((min >= 5 && min < 10) || (min >= 55 && min <= 59))
        {
            s[4] = 1;
        }
        if ((min >= 10 && min < 15) || (min >= 50 && min < 55))
        {
            s[1] = 1;
        }
        if ((min >= 15 && min < 20) || (min >= 45 && min < 50))
        {
            s[2] = 1;
        }
        if ((min >= 20 && min < 25) || (min >= 40 && min < 45))
        {
            s[3] = 1;
        }
        if (min >= 25 && min < 40)
        {
            s[0] = 1;
        }
        if (min >= 1 && min <= 30)
        {
            if (min >= 5)
            {
                s[7] = 1;
            }
            s[hour + 7] = 1;
            // For getting Hours
        }
        if (min > 30 && min <= 59)
        {
            s[6] = 1;
            if (s[2] != 1)
            {
                s[5] = 1;
            }
            if (hour != 12)
                s[hour + 8] = 1;
            else
                s[8] = 1;
        }
        if (min >= 0 && min < 5)
        {
            s[hour + 7] = 1;
            // For getting Hours s[20]=1;
        }
    }
    for (i = 0; i < 21; i++)
    {
        if (s[i] == 1)
        {
            printf("%s ", temp[i]);
        }
    }
    printf("\n");
}
