#include <stdio.h>
#include <math.h>

int factorial(int);

int main() {
    float x, temp, result = 0;
    int accuracy, count = 0, k = 1;
    int choice;

    printf("Select a trigonometric function:\n");
    printf("1. Sine (sin)\n");
    printf("2. Cosine (cos)\n");
    printf("3. Tangent (tan)\n");
    printf("4. Cosecant (csc)\n");
    printf("5. Secant (sec)\n");
    printf("6. Cotangent (cot)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value x (in degrees) to find the trigonometric function value: ");
    scanf("%f", &x);
    temp = x;
    x = (float)x * (3.14159 / 180);

    printf("Enter the value to get more accuracy (3 for least, and more for more accuracy): ");
    scanf("%d", &accuracy);

    do {
        if (count % 2 == 0) {
            result += pow(x, k) / factorial(k);
        } else {
            result -= pow(x, k) / factorial(k);
        }
        count++;
        k += 2;
    } while (count <= accuracy);

    switch (choice) {
        case 1:
            printf("sin(%f) = %f calculated mathematically\n", temp, result);
            printf("sin(%f) = %f calculated using library function\n", temp, sin(x));
            break;
        case 2:
            printf("cos(%f) = %f calculated mathematically\n", temp, result);
            printf("cos(%f) = %f calculated using library function\n", temp, cos(x));
            break;
        case 3:
            printf("tan(%f) = %f calculated mathematically\n", temp, sin(x) / cos(x));
            printf("tan(%f) = %f calculated using library function\n", temp, tan(x));
            break;
        case 4:
            printf("csc(%f) = %f calculated mathematically\n", temp, 1 / sin(x));
            printf("csc(%f) = %f calculated using library function\n", temp, 1 / sin(x));
            break;
        case 5:
            printf("sec(%f) = %f calculated mathematically\n", temp, 1 / cos(x));
            printf("sec(%f) = %f calculated using library function\n", temp, 1 / cos(x));
            break;
        case 6:
            printf("cot(%f) = %f calculated mathematically\n", temp, cos(x) / sin(x));
            printf("cot(%f) = %f calculated using library function\n", temp, 1 / tan(x));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int factorial(int val) {
    int factorial = 1, i;
    for (i = 1; i <= val; i++) {
        factorial *= i;
    }
    return factorial;
}
