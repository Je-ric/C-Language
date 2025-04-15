#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i, result;
	printf("Increment and Decrement\n");
	printf("Input value: ");
	scanf("%d" ,&i);

	result = ++i;
	printf("\nValue of ++i is %d\n",result);
	printf("Pre-Increment input value is %d\n",i);

	result = i++;
	printf("\nValue of i++ is %d\n",result);
	printf("Post-Increment input value is %d\n",i);

	result = --i;
	printf("\nValue of --i is %d\n",result);
	printf("Pre-Decrement input value is %d\n",i);

	result = i--;
	printf("\nValue of i-- is %d\n",result);
	printf("Post-Decrement input value is %d\n",i);
	getch();
}

