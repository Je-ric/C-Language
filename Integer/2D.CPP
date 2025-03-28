#include<conio.h>
#include<stdio.h>

void main(){
	clrscr();
	int n[50][50];
	int row, column;
	int sum = 0, total=0, result = 0;

	printf("Enter row: ");
	scanf("%d",&row);
	printf("Enter column: ");
	scanf("%d",&column);

	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
		printf("Enter number: ");
		scanf("%d",&n[i][j]);

		sum+=n[i][j];

		if(n[i][j] % 2 == 0)
			total+=n[i][j];
		if(n[i][j] % 2 != 0)
			result+=n[i][j];
		}
	}

	for(i=0; i<row; i++){
		for(int j=0; j<column; j++){
		printf(" %d",n[i][j]);
		}
		printf("\n");
	}
		printf("Sum of all: %d\n",sum);
		printf("Sum of all even: %d\n",total);
		printf("Sum of all odd: %d",result);

	getch();
}