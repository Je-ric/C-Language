#include<stdio.h>

int main() {
    float x, y;

    printf("Enter (x, y) Co-ordinates: ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("Co-ordinates (%f, %f) lie in the First Quadrant\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("Co-ordinates (%f, %f) lie in the Second Quadrant\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("Co-ordinates (%f, %f) lie in the Third Quadrant\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("Co-ordinates (%f, %f) lie in the Fourth Quadrant\n", x, y);
    }
    else if (x == 0 && y == 0) {
        printf("Co-ordinates (%f, %f) lie at the Origin\n", x, y);
    }

    return 0;
}
