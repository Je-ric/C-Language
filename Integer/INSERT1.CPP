#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENT 100

void Add(int a[], int *n);
void input(int a[], int n);
void output(int a[], int n);

void main(){ int n, a[MAX_ELEMENT];
	do{	clrscr();
		printf("How many elements: ");
		scanf("%d",&n);
	}while(n<0||n>MAX_ELEMENT);

//==========input array
	input(a, n);

//===========before add
	printf("\nBefore adding: ");
	output (a, n);

//=========add array
	Add(a, &n);

//==========after add
	printf("After adding: ");
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

void Add(int a[], int *n){
	int add, pos;
	printf("\nInput number to add: ");
	scanf("%d",&add);
	do{	printf("Input position: ");
		scanf("%d",&pos);
	}while(pos<0||pos>*n);
	for(int i=*n;i>pos;i--)	a[i]=a[i-1];
	a[pos]=add;
	(*n)++;
}