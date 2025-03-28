#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int type;
	int i,n,r=0,fact,n1,n2,j,p;;
	printf("[1] Determine the input if Prime or Not\n");
	printf("[2] Print Prime Numbers upto(n)\n");
	printf("[3] Print prime numbers between beginning and ending numbers\n");
	printf("Select: ");
	scanf("%d",&type);
	switch(type){
	case 1:
		clrscr();
		printf("[Determine the input if Prime or Not]\n");
		printf("Enter Any No: ");
		scanf("%d",&n);
		for(i=2;i<=n-1;i++){
			if(n%i==0)
			r=1;
			break;
			}
		if(r==0)
			printf("Prime Number");
		else
			printf("Not a Prime Number");
	break;
	case 2:
		clrscr();
		printf("[Print Prime Numbers upto(n)]\n");
		printf("Enter the Number: ");
		scanf("%d",&n);
		printf("Prime Numbers are: ");
		for(i=1; i<=n; i++){
			fact=0;
		for(j=1; j<=n; j++){
			if(i%j==0)
			fact++;
			}
		if(fact==2)
			printf("%d " ,i);
			}
	break;
	case 3:
		clrscr();
		printf("[Print prime numbers between beginning and ending numbers]\n");
		printf("Enter beginning number: ");
		scanf("%d", &n1);
		printf("Enter the end number: ");
		scanf("%d", &n2);
		printf("Prime numbers between %d and %d are: ", n1, n2);
		for(i=n1+1; i<n2; ++i){
			p=0;
		for(j=2; j<=i/2; ++j){
			if(i%j==0){
			p=1;
			break;
			}
		}
		if(p==0)
			printf("%d ",i);
			}
	break;
	default: printf("Invalid");
	}
	getch();
	return 0;
}