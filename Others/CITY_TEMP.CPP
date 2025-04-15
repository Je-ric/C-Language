#include<conio.h>
#include<stdio.h>

void main(){
	clrscr();
	float a[10][10];
	float b[10][10];
	int city=1,week;
	char city1,city2;

	printf("How many weeks: ");
	scanf("%d",&week);

	printf("Name of City 1: ");
	scanf("%s",&city1);
	printf("Name of City 2: ");
	scanf("%s",&city2);

	for(int i=0; i<city; i++){
		for(int j=0; j<week; j++){
		printf("Enter Temperature of %s City [%d], Week [%d]: ",city1,i+1,j+1);
		scanf("%f",&a[i][j]);
		}
		printf("\n");
	}

	for(int x=0; x<city; x++){
		for(int y=0; y<week; y++){
		printf("Enter Temperature of %s City [%d], Week [%d]: ",city2,x+2,y+1);
		scanf("%f",&b[x][y]);
		}
		printf("\n");
	}

	for(i=0; i<city; i++){
		for(int j=0; j<week; j++){
		printf("City [%d], Week [%d]:%.2f\n",i+1,j+1,a[i][j]);
		}
		printf("\n");
	}

	for(x=0; x<city; x++){
		for(int y=0; y<week; y++){
		printf("City [%d], Week [%d]:%.2f\n",x+2,y+1,b[x][y]);
		}
		printf("\n");
	}

	getch();
}