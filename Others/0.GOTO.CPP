#include<stdio.h>
#include<conio.h>
int main(){
	char choice;
again:
stop:
	printf ("\nTry again? [Y/N]: ");
	scanf (" %c", &choice);
	if(choice=='Y'|| choice=='y'){
		goto again;
		}
	else if(choice=='N'|| choice=='n'){
		}
	else{
		goto stop;
		}
	getch();
	return 0;
	}