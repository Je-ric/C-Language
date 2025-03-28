#include <stdio.h>
#include<conio.h>
#define MAX_ELEMENT 100

void main(){
	int n, a[MAX_ELEMENT];
	do{	clrscr();
		printf("How many elements: ");
		scanf("%d",&n);
	}while(n<0||n>MAX_ELEMENT);

//input array
	for(int i=0;i<n;i++){
		printf("[%d]= ",i);
		scanf("%d",&a[i]);
	}

//Before Sort - Original
	printf("\nBefore sorting: ");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);

//After Sort - Ascending
	int TEMP;
	for(i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if(a[i]>a[j]){
				TEMP=a[i];
				a[i]=a[j];
				a[j]=TEMP;
			}
//Print Ascending
	printf("\nAfter sorting: ");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
//After sort - Descending
	for(i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if(a[i]<a[j]){
				TEMP=a[i];
				a[i]=a[j];
				a[j]=TEMP;
			}
//Print Descending
	printf("\nAfter sorting: ");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	getch();
}