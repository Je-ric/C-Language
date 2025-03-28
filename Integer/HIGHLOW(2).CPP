#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	printf("[Determine the highest and lowest input using iteration]\n");
again:
	int smallest,high=0;
	int i;
	int input,many;
	char choice;

	printf("\nHow many numbers: ");
	scanf("%d",&many);

	for(i=1;i<=many;i++){
	printf("Enter value [%d]: ",i);
	scanf("%d",&input);
		if(input<smallest)
		smallest=input;
		if(input>high)
		high=input;
	}
		printf("%d is the smallest number\n",smallest);
		printf("%d is the highest number\n",high);
		smallest=input;
stop:
	printf ("Try again? [Y/N]: ");
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