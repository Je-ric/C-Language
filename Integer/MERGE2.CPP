#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int first_array[50],second_array[50],third_array[100],n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d integer value for 1st Array: \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&first_array[i]);
	printf("Enter %d integer value for 2nd Array second: \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&second_array[i]);

	printf("\nAfter merging third array is given below\n");
	for(i=0;i<n*2;i++){
		if(i<n)
		third_array[i]=first_array[i];
		else
		third_array[i]=second_array[i-n];
		printf("%d ",third_array[i]);
	}
	getch();
	return 0;
}