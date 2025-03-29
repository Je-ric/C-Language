#include <stdio.h>

#include <stdlib.h>
main()
{
    int i, size, j, zerosCount = 0;
    printf("Enter Size of Array\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter 1's and 0's only\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if (!(a[i] == 0 || a[i] == 1))
        {
            printf("Please Enter either 0 or 1\n");
            exit(0);
        }
    }
    for (i = 0; i < size; i++)
    {
        if (a[i] == 0)
        {
            zerosCount++;
        }
    }
    for (i = 0; i < size; i++)
    {
        if (i < zerosCount)
            a[i] = 0;
        else
            a[i] = 1;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
Case 2 :

#include <stdio.h>

#include <stdlib.h>
    main()
{
    int i, size, temp, j, left, right;
    printf("Enter Size of Array\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter 1's and 0's only\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if (!(a[i] == 0 || a[i] == 1))
        {
            printf("Please Enter either 0 or 1\n");
            exit(0);
        }
    }
    left = 0;
    right = size - 1;
    while (left < right)
    {
        while (a[left] == 0 && left < right)
        {
            left++;
        }
        while (a[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            a[left] = 0;
            a[right] = 1;
            left++;
            right--;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
Case 3 :

#include <stdio.h>

#include <stdlib.h>
    main()
{
    int i, size, temp, j;
    printf("Enter Size of Array\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter 1's and 0's only\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if (!(a[i] == 0 || a[i] == 1))
        {
            printf("Please Enter either 0 or 1\n");
            exit(0);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
