#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	clrscr();
	int a, d, n, i, tn;
	int sum =0;

	printf("Arithmetic Progression\n");
	printf("Enter the first term value of the A.P. series: ");
	scanf("%d",&a);
	printf("Enter the total numbersin the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);
	sum =(n *(2* a +(n -1)* d ))/2;
	tn = a +(n -1)* d;
	printf("Sum of the A.P series is: ");
	for(i = a; i <= tn; i = i + d ){
		if(i != tn)
		printf("%d + ", i);
		else
		printf("%d = %d ", i, sum);
	}
	getch();
	return 0;
}
