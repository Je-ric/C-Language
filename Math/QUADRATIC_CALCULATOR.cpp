#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float value_a, value_b;
    float sum;
    float coefficient_A, coefficient_B, coefficient_C;
    float root1, root2;
    float real_part, imaginary_part, discriminant;

    printf("[1] Calculate Sum of Squares and Square Roots\n");
    printf("[2] Calculate Roots of Quadratic Equation\n");
    printf("[3] Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value of a: ");
            scanf("%f", &value_a);

            printf("Enter the value of b: ");
            scanf("%f", &value_b);

            sum = pow(value_a, 2) + sqrt(value_a * value_b) + pow(value_b, 2);

            printf("Sum = %f\n", sum);
            break;

        case 2:
            printf("Enter the values of A, B, and C: ");
            scanf("%f %f %f", &coefficient_A, &coefficient_B, &coefficient_C);

            if (coefficient_A == 0 || coefficient_B == 0 || coefficient_C == 0) {
                printf("Error: Coefficients cannot be zero.\n");
            } else {
                discriminant = coefficient_B * coefficient_B - 4.0 * coefficient_A * coefficient_C;

                if (discriminant < 0) {
                    printf("Imaginary Roots\n");
                    real_part = -coefficient_B / (2.0 * coefficient_A);
                    imaginary_part = sqrt(fabs(discriminant)) / (2.0 * coefficient_A);
                    printf("Root1 = %f + i %f\n", real_part, imaginary_part);
                    printf("Root2 = %f - i %f\n", real_part, imaginary_part);
                } else if (discriminant == 0) {
                    printf("Roots are real and equal\n");
                    root1 = -coefficient_B / (2.0 * coefficient_A);
                    root2 = root1;
                    printf("Root1 = %f \n", root1);
                    printf("Root2 = %f \n", root2);
                } else if (discriminant > 0) {
                    printf("Roots are real and distinct\n");
                    root1 = (-coefficient_B + sqrt(discriminant)) / (2.0 * coefficient_A);
                    root2 = (-coefficient_B - sqrt(discriminant)) / (2.0 * coefficient_A);
                    printf("Root1 = %f \n", root1);
                    printf("Root2 = %f \n", root2);
                }
            }
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
