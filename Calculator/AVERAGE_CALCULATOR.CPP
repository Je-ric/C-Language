#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int n, i;
	float sum=0, x, avg;
	printf("\nEnter How Many Numbers : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("x = ");
		scanf("%f", &x);
		sum += x;
		}
	avg = sum / n;
	printf("\nSum: %.2f",sum);
	printf("\nThe Average of Numbers is : %0.2f", avg);
	getch();
	return 0;
}