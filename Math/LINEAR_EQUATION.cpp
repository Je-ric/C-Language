#include<stdio.h>

int main() {
    float coefficient_a1, coefficient_a2, coefficient_b1, coefficient_b2, constant_c1, constant_c2;
    float determinant_values[4], coordinate_x, coordinate_y;

    printf("Enter coefficient a1, b1, and c1 of the equation a1x + b1y = c1: ");
    scanf("%f %f %f", &coefficient_a1, &coefficient_b1, &constant_c1);

    printf("Enter coefficient a2, b2, and c2 of the equation a2x + b2y = c2: ");
    scanf("%f %f %f", &coefficient_a2, &coefficient_b2, &constant_c2);

    if (((coefficient_a1 * coefficient_b2) - (coefficient_a2 * coefficient_b1)) != 0) {
        determinant_values[0] = constant_c1 / coefficient_a1;
        determinant_values[1] = (-1) * (coefficient_b1 / coefficient_a1);
        determinant_values[2] = constant_c2 / coefficient_a2;
        determinant_values[3] = (-1) * (coefficient_b2 / coefficient_a2);
        
        coordinate_y = ((determinant_values[2] - determinant_values[0]) / (determinant_values[1] - determinant_values[3]));
        coordinate_x = determinant_values[0] + (determinant_values[1] * coordinate_y);
        
        printf("X = %f\nY = %f\n", coordinate_x, coordinate_y);
    } else if (((coefficient_a1 * coefficient_b2) - (coefficient_a2 * coefficient_b1)) == 0 &&
               ((coefficient_b1 * constant_c2) - (coefficient_b2 * constant_c1)) == 0 &&
               ((coefficient_a2 * constant_c1) - (coefficient_a1 * constant_c2)) == 0) {
        if (constant_c1 / coefficient_a1 >= 0)
            printf("Infinite number of solutions\nX = %fY + %f\n", (-1) * coefficient_b1 / coefficient_a1, constant_c1 / coefficient_a1);
        else
            printf("Infinite number of solutions\nX = %fY %f\n", (-1) * coefficient_b1 / coefficient_a1, constant_c1 / coefficient_a1);
    } else if (((coefficient_a1 * coefficient_b2) - (coefficient_a2 * coefficient_b1)) == 0 &&
               ((coefficient_b1 * constant_c2) - (coefficient_b2 * constant_c1)) != 0 &&
               ((coefficient_a2 * constant_c1) - (coefficient_a1 * constant_c2)) != 0) {
        printf("No Solutions\n");
    }

    return 0;
}
