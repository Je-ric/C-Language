#include<stdio.h>
#include<conio.h>
int main() {
	clrscr();
	int pw,input;
	printf("Set password: ");
	scanf("%d",&pw);
	clrscr();
	again:
	printf("\nInput the password: ");
	scanf("%d",&input);

	if(input==pw){
		printf("Correct password");
		break;
	}
	else{
		printf("Wrong password, try another");
		goto again;
	}
	printf("\n");
	getch();

	return 0;
}
