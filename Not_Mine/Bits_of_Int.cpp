#include <stdio.h>
main()
{
    int num, totalBits, k;
    printf("Enter num to get bits\n");
    scanf("%d", &num);
    printf("Enter total number of bits\n");
    scanf("%d", &totalBits);
    int a[totalBits];
    for (k = 0; k < totalBits; k++)
    {
        a[k] = (num & (1 << k)) >>
               k;
    }
    for (k = totalBits - 1; k >= 0; k--)
    {
        printf("%d", a[k]);
    }
    printf("\n");
}
