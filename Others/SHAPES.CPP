#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose the shape:\n");
    printf("1. Cone\n");
    printf("2. Cuboid\n");
    printf("3. Cylinder\n");
    printf("4. Sphere\n");
    printf("5. Cube\n");
    printf("6. Circle\n");
    printf("7. Square\n");
    printf("8. Right Angled Triangle\n");
    printf("9. Rectangle\n");
    printf("10. Rhombus\n");
    printf("11. Determine the Triangle's Type\n");
    printf("12. Parallelogram\n");
    printf("13. Trapezium\n");
    printf("14. Triangle\n");
    printf("15. Octagon\n");
    printf("16. Heptagon\n");
    printf("17. Hexagon\n");
    printf("18. Pentagon\n");
    printf("19. Equilateral Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius, height;
            float surface_area, volume;
            printf("Enter value of radius and height of a cone:\n");
            scanf("%f%f", &radius, &height);
            surface_area = (22.0 / 7) * radius * (radius + sqrt(radius * radius + height * height));
            volume = (1.0 / 3) * (22.0 / 7) * radius * radius * height;
            printf("Surface area of cone is: %.3f\n", surface_area);
            printf("Volume of cone is: %.3f\n", volume);
            break;
        }

        case 2: {
            float width, length, height;
            float surface_area, volume, space_diagonal;
            printf("Enter value of width, length & height of the cuboid:\n");
            scanf("%f%f%f", &width, &length, &height);
            surface_area = 2 * (width * length + length * height + height * width);
            volume = width * length * height;
            space_diagonal = sqrt(width * width + length * length + height * height);
            printf("Surface area of cuboid is: %.3f\n", surface_area);
            printf("Volume of cuboid is: %.3f\n", volume);
            printf("Space diagonal of cuboid is: %.3f\n", space_diagonal);
            break;
        }

        case 3: {
            float radius, height;
            float surface_area, volume;
            printf("Enter value for radius and height of a cylinder:\n");
            scanf("%f%f", &radius, &height);
            surface_area = 2 * (22.0 / 7) * radius * (radius + height);
            volume = (22.0 / 7) * radius * radius * height;
            printf("Surface area of cylinder is: %.3f\n", surface_area);
            printf("Volume of cylinder is: %.3f\n", volume);
            break;
        }
        
        case 4: {
            float radius;
            float surface_area, volume;
            printf("Enter radius of the sphere:\n");
            scanf("%f", &radius);
            surface_area = 4 * (22.0 / 7) * radius * radius;
            volume = (4.0 / 3) * (22.0 / 7) * radius * radius * radius;
            printf("Surface area of sphere is: %.3f\n", surface_area);
            printf("Volume of sphere is: %.3f\n", volume);
            break;
        }
        
        case 5: {
            float side;
            float surface_area, volume;
            printf("Enter size of any side of a cube:\n");
            scanf("%f", &side);
            surface_area = 6 * (side * side);
            volume = side * side * side;
            printf("Surface area of cube is: %.3f\n", surface_area);
            printf("Volume of cube is: %.3f\n", volume);
            break;
        }

        case 6: {
            float radius;
            float area1, perimeter, pi = 3.14;
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            perimeter = 2 * pi * radius;
            printf("Perimeter of the Circle = %.3f units\n", perimeter);
            area1 = pi * radius * radius;
            printf("Area of the Circle = %.3f square units\n", area1);
            break;
        }

        case 7: {
            int s;
            printf("Enter side length for square:");
            scanf("%d", &s);
            int area = s * s;
            printf("Area: %d square units\n", area);
            break;
        }

        case 8: {
            float height, base;
            printf("Enter height and base length for the triangle:\n");
            scanf("%f%f", &height, &base);
            float area = 0.5 * height * base;
            printf("Area: %.2f square units\n", area);
            break;
        }

        case 9: {
            int width, height;
            printf("Enter height and width for the rectangle: ");
            scanf("%d%d", &height, &width);
            int area = height * width;
            printf("Area of the Rectangle = %d square units\n", area);
            break;
        }

        case 10: {
            float radius, height;
            printf("Enter radius and height of the cone: ");
            scanf("%f%f", &radius, &height);
            float volume = (1.0 / 3) * 3.14 * radius * radius * height;
            printf("Volume of the Cone = %.2f cubic units\n", volume);
            break;
        }

        case 11: {
            float length, width, height;
            printf("Enter length, width, and height of the cuboid: ");
            scanf("%f%f%f", &length, &width, &height);
            float volume = length * width * height;
            printf("Volume of the Cuboid = %.2f cubic units\n", volume);
            break;
        }

        case 12: {
            float radius, height;
            printf("Enter radius and height of the cylinder: ");
            scanf("%f%f", &radius, &height);
            float volume = 3.14 * radius * radius * height;
            printf("Volume of the Cylinder = %.2f cubic units\n", volume);
            break;
        }

        case 13: {
            float radius;
            printf("Enter radius of the sphere: ");
            scanf("%f", &radius);
            float volume = (4.0 / 3) * 3.14 * radius * radius * radius;
            printf("Volume of the Sphere = %.2f cubic units\n", volume);
            break;
        }

        case 14: {
            float side;
            printf("Enter side length of the cube: ");
            scanf("%f", &side);
            float volume = side * side * side;
            printf("Volume of the Cube = %.2f cubic units\n", volume);
            break;
        }

        case 15: {
            float base1, base2, height;
            printf("Enter lengths of the bases and height of the trapezoid: ");
            scanf("%f%f%f", &base1, &base2, &height);
            float area = 0.5 * (base1 + base2) * height;
            printf("Area of the Trapezoid = %.2f square units\n", area);
            break;
        }

        case 16: {
            float side;
            printf("Enter side length of the octagon: ");
            scanf("%f", &side);
            float area = 2 * (1 + sqrt(2)) * side * side;
            printf("Area of the Octagon = %.2f square units\n", area);
            break;
        }

        case 17: {
            float side;
            printf("Enter side length of the heptagon: ");
            scanf("%f", &side);
            float area = (7.0 / 4) * side * side * (1 / tan(3.14159 / 7));
            printf("Area of the Heptagon = %.2f square units\n", area);
            break;
        }

        case 18: {
            float side;
            printf("Enter side length of the hexagon: ");
            scanf("%f", &side);
            float area = (3 * sqrt(3) * side * side) / 2;
            printf("Area of the Hexagon = %.2f square units\n", area);
            break;
        }

        case 19: {
            float side;
            printf("Enter side length of the pentagon: ");
            scanf("%f", &side);
            float area = (1.0 / 4) * sqrt(5 * (5 + 2 * sqrt(5))) * side * side;
            printf("Area of the Pentagon = %.2f square units\n", area);
            break;
        }

        case 20: {
            float side;
            printf("Enter side length of the equilateral triangle: ");
            scanf("%f", &side);
            float area = (sqrt(3) / 4) * side * side;
            printf("Area of the Equilateral Triangle = %.2f square units\n", area);
            break;
        }

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
