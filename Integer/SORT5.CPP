#include <stdio.h>
#include<conio.h>
#define MAX_ELEMENT 100

void Ascending_sort(int a[], int n);
void Descending_sort(int a[], int n);

void main(){
	int n, a[MAX_ELEMENT];
	do{	clrscr();
		printf("How many elements: ");
		scanf("%d",&n);
	}while(n<0||n>MAX_ELEMENT);

//==========input array
	for(int i=0;i<n;i++){
		printf("[%d]= ",i);
		scanf("%d",&a[i]);
	}

//===========before sort
	printf("\nBefore sorting: ");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);

	Ascending_sort(a,n);

//==========after sort
	printf("\nAfter Ascending sorting: ");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}

	Descending_sort(a,n);
	printf("\nAfter Descending sorting: ");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	getch();
}

//==========end main

void Ascending_sort(int a[], int n){
	int TEMP;
	for(int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if(a[i]>a[j]){
				TEMP=a[i];
				a[i]=a[j];
				a[j]=TEMP;
			}
		}
void Descending_sort(int a[], int n){
	int TEMP;
	for(int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if(a[i]<a[j]){
				TEMP=a[i];
				a[i]=a[j];
				a[j]=TEMP;
			}
		}
