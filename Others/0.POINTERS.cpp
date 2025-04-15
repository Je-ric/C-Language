#include<stdio.h>
#include<conio.h>

int main(){
    clrscr();
    int varIntX;
    float varFloatY;
    char varCharZ;

    printf("Enter a value for variable varIntX: ");
    scanf("%d", &varIntX);
    printf("Enter a value for variable varFloatY: ");
    scanf("%f", &varFloatY);
    printf("Enter a value for variable varCharZ: ");
    scanf(" %c", &varCharZ);

    printf("\nUsing & operator :\n");
    printf("===================================\n");
    printf("address of varIntX = %x\n", &varIntX);
    printf("address of varFloatY = %x\n", &varFloatY);
    printf("address of varCharZ = %x\n", &varCharZ);

    printf("\nUsing & and * operator :\n");
    printf("===================================\n");
    printf("value at address of varIntX = %d\n", *(&varIntX));
    printf("value at address of varFloatY = %f\n", *(&varFloatY));
    printf("value at address of varCharZ = %c\n", *(&varCharZ));

    int *ptrIntX = &varIntX;
    float *ptrFloatY = &varFloatY;
    char *ptrCharZ = &varCharZ;

    printf("\nUsing only pointer variable:\n");
    printf("===================================\n");
    printf("address of varIntX = %x\n", ptrIntX);
    printf("address of varFloatY = %x\n", ptrFloatY);
    printf("address of varCharZ = %x\n", ptrCharZ);

    printf("\nUsing only pointer operator:\n");
    printf("===================================\n");
    printf("value at address of varIntX = %d\n", *ptrIntX);
    printf("value at address of varFloatY = %f\n", *ptrFloatY);
    printf("value at address of varCharZ = %c\n", *ptrCharZ);
 
    getch();
    return 0;
}
    