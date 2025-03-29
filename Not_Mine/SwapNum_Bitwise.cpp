#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter num1\n");
    scanf("%d", &num1);
    printf("Enter num2\n");
    scanf("%d", &num2);
    printf("Before Swapping Number 1= %d,Number 2= %d\n", num1, num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("x=%d\n", num1);
    printf("After Swapping Number 1= %d,Number 2= %d\n", num1, num2);
    return 0;
}
