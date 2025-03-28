#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	float temp, temp_type, kelvin, rankine;
	//Convert Temperature
	printf("Enter a temperature: ");
	scanf("%f" ,&temp);
	printf("Options:\n");
	printf("Enter [1] if Celsius to Fahrenheit, Kelvin and Rankine");
	printf("\nEnter [2] if Fahrenheit to Celsius, Rankine and Kelvin");
	printf("\nEnter [3] if Kelvin to Rankine, Celsius and Fahrenheit");
	printf("\nEnter [4] if Rankine to Kelvin, Fahrenheit and Celsius");
	printf("\nEnter temperature type converter: ");
	scanf("%f" ,&temp_type);
	clrscr();

	if (temp_type == 1){
		printf("[1] Celsius to Fahrenheit, Kelvin and Rankine\n");
		float result = (temp * 5 / 9) + 32;
		printf("The temperature of %.2f in Celsius to Fahrenheit is " ,temp);
		printf("%.2f" ,result);
		float kelvin = temp + 273.15;
		printf("\nThe temperature of %.2f in Celsius to Kelvin is " ,temp);
		printf("%.2f" ,kelvin);
		float rankine = temp * 9/5 + 491.67;
		printf("\nThe temperature of %.2f in Celsius to Rankine is " ,temp);
		printf("%.2f" ,rankine);
	}
	else if(temp_type == 2){
		printf("[2] Fahrenheit to Celsius, Rankine and Kelvin\n");
		float result = (temp - 32) * 5 / 9;
		printf("The temperature of %.2f in Fahrenheit to Celsius is " ,temp);
		printf("%.2f", result);
		float rankine = temp + 459.67;
		printf("\nThe temperature of %.2f in Fahrenheit to Rankine is " ,temp);
		printf("%.2f" ,rankine);
		float kelvin = (temp + 459.67) * 5/9;
		printf("\nThe temperature of %.2f in Fahrenheit to Kelvin is " ,temp);
		printf("%.2f" ,kelvin);
	}
	else if(temp_type == 3){
		printf("[3] Kelvin to Rankine, Celsius and Fahrenheit\n");
		float rankine = temp * 9/5;
		printf("The temperature of %.2f in Kelvin to Rankine is " ,temp);
		printf("%.2f" ,rankine);
		float result = temp - 273.15;
		printf("\nThe temperature of %.2f in Kelvin to Celsius is " ,temp);
		printf("%.2f" ,result);
		float kelvin = (temp * 9/5) - 459.67;
		printf("\nThe temperature of %.2f in Kelvin to Fahrenheit is " ,temp);
		printf("%.2f" ,kelvin);
	}
	else if(temp_type == 4){
		printf("[4] Rankine to Kelvin, Fahrenheit and Celsius\n");
		float rankine = temp * 9/5;
		printf("The temperature of %.2f in Rankine to Kelvin is " ,temp);
		printf("%.2f" ,rankine);
		float result = temp - 273.15;
		printf("\nThe temperature of %.2f in Rankine to Fahrenheit is " ,temp);
		printf("%.2f" ,result);
		float kelvin = (temp * 5/9) - 273.15;
		printf("\nThe temperature of %.2f in Rankine to Celsius is " ,temp);
		printf("%.2f" ,kelvin);
	}
	else{
		printf("ERROR");
	}
	getch();
}


