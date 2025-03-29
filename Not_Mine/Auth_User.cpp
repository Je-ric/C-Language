#include <stdio.h>

#include <stdlib.h>
main()
{
    int userPasswords[] =
        {
            1234, 2345, 3456, 4567, 5678, 6789, 7890, 8901, 9012, 1111},
        i, password, count = 0, flag = 0;
    do
    {
        printf("Enter 4 digit Pincode\n");
        scanf("%d", &password);
        for (i = 0; i < 10; i++)
        {
            if (userPasswords[i] == password)
            {
                printf("Authentication Successful\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (count != 2)
                printf("PIN Code Wrong,try again. %d times Over\n", count + 1);
            else
                printf("PIN Code Wrong. %d times Over\n", count + 1);
            count += 1;
        }

    } while (count > 0 && count < 3 && flag == 0);
    if (flag == 0)
    {
        printf("You exceeded your trail.Access Denied and Account Blocked\n");
    }
}
