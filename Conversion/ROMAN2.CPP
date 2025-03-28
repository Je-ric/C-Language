#include<stdio.h>
#include<conio.h>
void main(){
	long n;
	char ch;
start:	clrscr();
	printf("Input value: ");
	scanf("%ld",&n);
	printf("The Roman number is:");
	while(n!=0){
		switch(n){
		case 4: printf("IV");n-=4;break;
		case 9: printf("IX");n-=9;break;
		case 49:printf("IL");n-=49;break;
		case 99:printf("IC");n-=99;break;
		case 499:printf("ID");n-=499;break;
		case 999:printf("IM");n-=999;break;
		default:if(n>=1000){printf("M"); n=n-1000;}
			else if(n>=500){printf("D");n=n-500;}
			else if(n>=100){printf("C");n=n-100;}
			else if(n>=50){printf("L");n=n-50;}
			else if(n>=10){printf("X");n=n-10;}
			else if(n>=5){printf("V");n=n-5;}
			else {printf("I");n=n-1; }
		}
	}
	printf("\nAgain? [y/n]");
choose:	switch(	getch()){
	case 'y': goto start;
	case 'n': goto end;
	default: goto choose;
	}
end:    }