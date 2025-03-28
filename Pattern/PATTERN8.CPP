#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int size,i,j;
	printf( "Input the size of the square: " );
	scanf( "%d", &size );

	if(size < 1 || size > 10) {
	printf("Size should be in the range 1 to 10\n");
	return 0;
		}
	for(i=0; i<size; i++)
		{
	for(j=0; j<size; j++)
		{
	    if(i==0 || i==size-1)
		printf("#");
	    else if(j==0 || j==size-1)
		printf("#");
	    else
		printf(" ");
		}
	printf("\n");
	}
	getch();
	return 0;
}
