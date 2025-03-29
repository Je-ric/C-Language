#include <stdio.h>
main()
{
    int i, j, k = 0, value, count, a[10], dummy;
    char *ones[] =
        {
            "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *temp[] =
        {
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] =
        {
            "-", "-", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    // hundreds are same as ones printf("Enter Value upto 6 digits to get in Words\n");
    dummy = value;
    scanf("%d", &value);
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
                    printf("%s only\n", ones[a[i - 1]]);
                    i--;
                    break;
                }
                if (i == 1 && a[i] == 1)
                {
                    printf("%s only\n", temp[a[i - 1]]);
                    i--;
                    break;
                }
                if (i == 1 && a[i] != 1 && a[i] != 0)
                {
                    printf("%s ", tens[a[i]]);
                }
                if (i == 0 && a[i] != 0)
                {
                    printf("%s only\n", ones[a[i]]);
                }
            }
        }
    }
    else
    {
        printf("Enter only upto 6 digits\n");
    }
}
