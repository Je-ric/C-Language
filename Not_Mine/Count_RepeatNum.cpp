#include <stdio.h>
main()
{
    int num, k, temp, frequency[9], flag = 0, i;
    printf("Enter number to find which digits are repeated\n");
    scanf("%d", #);
    temp = num;
    // By default setting frequency of digits as zero 
    for(i=0;i<10;i++)
    {
        frequency[i] = 0;
    }
    while (num > 0)
    {
        k = num % 10;
        frequency[k]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (frequency[i] > 1)
        {
            flag = 1;
            printf("%d --> repeated %d times\n", i, frequency[i]);
        }
    }
    if (flag == 0)
    {
        printf("No Repeated Digits\n");
    }
    else
    {
        printf("Repeated digits are there\n");
    }
}
