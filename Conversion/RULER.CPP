#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int type,inch,ft,cm;
	float total,result;
	printf("Options:\n");
	printf("Enter [1] if Inches to Feet and Centimeters");
	printf("\nEnter [2] if Feet to Centimeters and Inches");
	printf("\nEnter [3] if Centimeters to Inches to Feet");
	printf("\nEnter type converter: ");
	scanf("%d" ,&type);

	switch(type){
	case 1:
		printf("[1] Inches to Feet and Centimeters\n");
		printf("Enter Inches: ");
		scanf("%d",&inch);
			result = inch * 0.8333333;
		printf("The %d Inches to Feet:",inch);
		printf("%.2f",result);
			total = inch * 2.54;
		printf("\nThe %d Inches to Centimeters:",inch);
		printf("%.2f",total);
		break;
	case 2:
		printf("[2] Feet to Inches and Centimeters\n");
		printf("Enter Feets: ");
		scanf("%d",&ft);
			result = ft * 30.48;
		printf("The %d Feets to Centimeters: ",ft);
		printf("%.2f",result);
			total = ft * 12;
		printf("\nThe %d Feets to Inches: ",ft);
		printf("%.2f",total);
	case 3:
		printf("[3] Centimeters to Inches to Feet\n");
		printf("Enter Centimeters: ");
		scanf("%d",&cm);
			result = cm * 0.39370079;
		printf("The %d Centimeters to Inches: ",cm);
		printf("%.2f",result);
			total = cm * 0.0328084;
		printf("\nThe %d Centimeters to Feets: ",cm);
		printf("%.2f",total);
	default: printf("ERROR");
	}
	getch();
}