#include <stdio.h>
#include<conio.h>
#define MAX_ELEMENT 20

void Delete(int a[], int *n);
void input(int a[], int n);
void output(int a[], int n);

void main(){ int n, a[MAX_ELEMENT];
	do{	clrscr();
		printf("How many elements: ");
		scanf("%d",&n);
	}while(n<0||n>MAX_ELEMENT);

//==========input array
	input(a, n);

//===========before delete
	printf("\nBefore deleting: ");
	output (a, n);

//=========delete array
	Delete(a, &n);

//==========after delete
	printf("\nAfter deleting: ");
	output (a, n);
	getch();
}

//==========end main

void input(int a[], int n){
	for(int i=0;i<n;i++){
		printf("[%d]= ",i);
		scanf("%d",&a[i]);
	}
}

void output(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}

void Delete(int a[], int *n){
	int found=0, del;
	printf("\nInput the number to delete: ");
	scanf("%d",&del);
	for(int i=0;i<(*n);i++)
		if(a[i]==del){
			found++;
			(*n)--;
			for (int j=i;j<*n;j++) a[j]=a[j+1];
			i--;
		}
	if (!found) printf("\n%d is not found...", del);
}