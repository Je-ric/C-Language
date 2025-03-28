#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int n, sum = 0, i , add[100];

	printf("Enter how many numbers you want to add? ");
	scanf("%d", &n);

	for (i = 0; i<n; i++){
		printf("Enter %d elements: ",n);
		scanf("%d", &add[i]);
		sum = sum + add[i];
	}
	printf("Sum = %d\n", sum);
	getch();
	return 0;
}