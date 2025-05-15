#include <stdio.h>

int main()
{
    int i = 1, j = 1, rows;

    printf("PATTERN PRINTING WITH GOTO\\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);

// Print pattern using goto
outer_loop:
    if (i <= rows)
    {
        j = 1;
    inner_loop:
        if (j <= i)
        {
            printf("* ");
            j++;
            goto inner_loop;
        }
        printf("\\n");
        i++;
        goto outer_loop;
    }

    return 0;
}