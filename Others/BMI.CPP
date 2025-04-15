#include <stdio.h>
#include<conio.h>

void BMI (int weight, float height){
	float score = weight/ (height * height);
	printf("BMI = %.4f\n", score);
	printf("\nGrade: ");
		score <= 18.5 ? printf("Underweight") :
		score>18.5 && score<=24.9 ? printf("Normal") :
		score>=25.0 && score<=29.0 ? printf("Overweight") :
		score>=30 && score<=40 ? printf("Obese") :
		score>40 ? printf("Extreme Obese") :
	printf("Error");
	}

int main(void){
	clrscr();
	printf("[Body Mass Index (BMI)]\n\n");
	int w;
	float h;
	printf("Input the weight (kg): ");
	scanf("%d", &w);
	printf("Input the height (m): ");
	scanf("%f", &h);
	BMI(w, h);

	getch();
	return 0; }



