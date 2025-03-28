#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	printf("[Percentage]\n");
	float a,percentage;
	int b;
	printf("Enter obtained value: ");
	scanf("%f" ,&a);
	printf("Enter total value: ");
	scanf("%d" ,&b);
		percentage = a*100/b;
	printf("Percentage is %.2f%" ,percentage);
	getch();
	return 0;
}