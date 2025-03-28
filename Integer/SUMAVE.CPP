#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],many,i;
	float sum=0;
	float avg;
	clrscr();
	printf("How many numbers to sum: ");
	scanf("%d",&many);
	printf("Enter elements of an Array: \n");
	for(i=0;i<many;i++)
		scanf("%d",&a[i]);
	for(i=0;i<many;i++)
		sum=sum+a[i];
		printf("Sum: %.2f\n",sum);
		avg=sum/many;
	printf("Average: %.2f",avg);
	getch();
}