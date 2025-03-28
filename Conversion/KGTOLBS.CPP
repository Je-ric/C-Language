#include<stdio.h>
#include<conio.h>
void main(){

	clrscr();
	float kgtolbs=2.20, weight, scale;

	printf("Enter your weight: ");
	scanf("%f",&weight);
	printf("Enter [1] for kg\n");
	printf("Enter [2] for lbs: ");
	scanf("%f",&scale);

	if(scale == 1){
		float result = weight*kgtolbs;
		printf("%.2f",result);
	}
	else if(scale == 2){
		float result = weight/kgtolbs;
		printf("%.2f",result);
	}
	else{
		printf("ERROR");
	}
	getch();
}