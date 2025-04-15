#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generateRandomChar() {
    const char str[] = "QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm";
    return str[rand() % (sizeof(str) - 1)];
}

int main() {
    int num, n, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Number must be non-negative.\n");
        return 1;
    }

    srand(time(NULL));
    n = num / 2;

    for (i = 0; i < n; i++) {
        printf("%d%c", rand() % 10, generateRandomChar());
    }

    printf("\n");
    return 0;
}
