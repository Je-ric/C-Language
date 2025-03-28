#include <stdio.h>
#include <math.h>

int main() {
    int x_first, x_second, y_first, y_second;
    double distance;

    printf("Enter x-coordinate of the first point: ");
    scanf("%d", &x_first);
    printf("Enter y-coordinate of the first point: ");
    scanf("%d", &y_first);
    printf("Enter x-coordinate of the second point: ");
    scanf("%d", &x_second);
    printf("Enter y-coordinate of the second point: ");
    scanf("%d", &y_second);

    distance = sqrt(pow((x_second - x_first), 2) + pow((y_second - y_first), 2));

    printf("Distance between the two points: %lf\n", distance);

    return 0;
}
