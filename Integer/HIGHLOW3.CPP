#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	printf("[Determine the Highest and Lowest using Array]\n\n");
	int a[50],size,i,big,small;

	printf("Enter the size of the array : ");
	scanf("%d",&size);

	printf("Enter %d elements in the array : \n", size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}

	big=a[0];
	for(i=1;i<size;i++){
	if(big<a[i]){
		big=a[i];
	}
	}
	printf("Largest number in array : %d",big);

	small=a[0];
	for(i=1;i<size;i++){
	if(small>a[i]){
		small=a[i];
	}
	}
	printf("\nSmallest number in array : %d",small);
	getch();
	return 0;
}

