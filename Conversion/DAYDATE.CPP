#include<stdio.h>
#include<conio.h>
void main(){
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int date,mon,year,i,day=0,n=0;

	clrscr();
	printf("[Telling the day by inputting the date]\n\n");
	printf("Enter a valid date (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&date,&mon,&year);

	if((year%100!=0) && (year%4==0) || (year%400==0)){
		n=1;
		month[1]=29;
		}

	for(i=0;i<mon-1;i++)
		day=day+month[i];
		day=day+(date+year+(year/4)-2);
		day=day%7;
	if(n==1)
		day=day-1;

	printf("\nThe day at date is: ");
	switch(day){
		case 0:
		printf("Sunday");
		break;
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Saturday");
		break;
		}
	getch();
}
