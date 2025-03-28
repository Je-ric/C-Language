#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int n[100], size, i, j, swap;

	printf("Enter number of elements: ");
	scanf("%d", &size);

	printf("Enter %d integers\n", size);
	for (i = 0; i < size; i++){
		scanf("%d", &n[i]);
	}
	//Ascending
	for (i=0; i<(size-1); i++){
	for (j=0; j<size-i-1; j++){    // For decreasing order use <
	    if (n[j] > n[j+1]){
		swap = n[j];
		n[j] = n[j+1];
		n[j+1] = swap;
	    }
	}
	}
	printf("\nSorted list in descending order: ");
	for (i = 0; i < size;i++){
		printf("%d ",n[i]);
	}
	//Descending
	for (i = 0; i < (size-1); i++){
	for (j = 0; j <size-i- 1; j++){    // For increasing order use >
	    if (n[j] <n[j + 1]){
		swap = n[j];
		n[j] = n[j + 1];
		n[j + 1] = swap;
	    }
	}
	}
	printf("\nSorted list in ascending order: ");
	for (i = 0; i < size; i++){
		printf("%d ", n[i]);
	}
	getch();
	return 0;

}