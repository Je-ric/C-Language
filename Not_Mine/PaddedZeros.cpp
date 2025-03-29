#include <stdio.h>

#include <string.h>
main()
{
    int i, paddingDigits, lenNum, j;
    char num[20], tempNum[20];
    printf("Enter a number\n");
    scanf("%s", num);
    printf("Enter total number of digits\n");
    scanf("%d", &paddingDigits);
    lenNum = strlen(num);
    if (lenNum <= paddingDigits && (paddingDigits <= 20))
    {
        paddingDigits -= lenNum;
        for (i = 0; i < paddingDigits; i++)
        {
            tempNum[i] = '0';
        }
        for (j = i; j < lenNum + i; j++)
        {
            tempNum[j] = num[j - i];
        }
        tempNum[j] = '\0';
        printf("Total Digits padded with zeros in front is %s\n", tempNum);
    }
    else
    {
        printf("Total number of Digits enetered is lesser than given number or Total Digits exceeded 20 as we have declared only a 20 character array,if you want to increase you can.\n");
    }
}
