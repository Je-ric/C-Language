#include<stdio.h>
#include<conio.h>
int main(){
	int i,type,b,e,n;
	//clrscr();
	printf("[1] Print Even numbers between given numbers\n");
	printf("[2] Print Odd numbers between given numbers\n");
	printf("[3] Print Even numbers upto (n)\n");
	printf("[4] Print Odd numbers upto (n)\n");
	printf("[5] Check the specific number if even or odd\n");
	printf("Option: ");
	scanf("%d",&type);

	switch(type){
	case 1: //clrscr();
		printf("[1] Print Even numbers between given numbers\n\n");
		printf("Enter the beginning number: ");
		scanf("%d",&b);
		printf("Enter the ending number: ");
		scanf("%d",&e);
		printf("Even numbers between %d and %d: ",b,e);
		for(i=b;i<=e;i=i+1){
			if(i%2==0)
			printf("%d ",i);
		}
	break;
	case 2: //clrscr();
		printf("[2] Print Odd numbers between given numbers\n\n");
		printf("Enter the beginning of number: ");
		scanf("%d",&b);
		printf("Enter the ending of number: ");
		scanf("%d",&e);
		printf("Odd numbers between %d and %d: ",b,e);
		for(i=b;i<=e;i=i+1){
			if(i%2!=0)
			printf("%d ",i);
		}
	break;
	case 3: //clrscr();
		printf("[3] Print Even numbers upto (n)\n\n");
		printf("Enter a number: ");
		scanf("%d" ,&n);

		printf("\nEven numbers are: ");
		for(i=1; i<=n-1; i++){

			i += 1;
			printf("%d " ,i);
		}
	break;
	case 4: //clrscr();
		printf("[4] Print Odd numbers upto (n)\n\n");
		printf("Enter a number: ");
		scanf("%d" ,&n);

		printf("Odd numbers are: ");
		for(i=0; i<=n-1; i++){
			i += 1;
			printf("%d " ,i);
		}
	break;
	case 5: //clrscr();
		printf("[5] Check the specific number if even or odd\n\n");
		printf("Enter any number: ");
		scanf("%d" ,&n);

		if(n % 2 == 0){
			printf("%d is even" ,n);
		}
		else if(n% 2 == 1){
			printf("%d is odd" ,n);
		}
		else { printf("Invalid"); }
	break;
	default: printf("Invalid");
	}
	getch();
	return 0;
}