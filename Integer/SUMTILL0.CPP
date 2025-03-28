#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	double number,sum=0,num=0;
	float ave=0;
	printf("Just enter ""0"" if your done\n");
	do{
	printf("Enter a number: ");
	scanf("%lf", &number);
	sum += number;
	num++;
	}while(number != 0.0);

	printf("Sum = %.2lf",sum);
	num-=1;
	ave=sum/num;
	printf("\nAverage = %.2lf",ave);
	getch();
	return 0;
}


