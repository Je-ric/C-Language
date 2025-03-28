#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    clrscr();
    float first_term, common_ratio, last_term, sum = 0;
    int total_terms;

    printf("Geometric Progression\n");
    printf("Enter the first term of the G.P. series: ");
    scanf("%f", &first_term);
    printf("Enter the total number of terms in the G.P. series: ");
    scanf("%d", &total_terms);
    printf("Enter the common ratio of G.P. series: ");
    scanf("%f", &common_ratio);

    sum = (first_term * (1 - pow(common_ratio, total_terms + 1))) / (1 - common_ratio);
    last_term = first_term * pow(common_ratio, total_terms - 1);

    printf("Last term of G.P.: %.3f\n", last_term);
    printf("Sum of the G.P.: %.3f\n", sum);

    getch();
    return 0;
}
