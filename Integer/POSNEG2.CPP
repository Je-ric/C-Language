#include<conio.h>
#include<stdio.h>
int main(){
	clrscr();
	printf("[Determine if Positive or Negative and if it's Even or Odd Using Conditional Op]\n");
	int x;
	printf("Input a number: ");
	scanf("%d", &x);

	if(x==0){
		printf("Positive\n");
		}
	else if(x<0 && (x%2) != 0)
		{
		printf("Negative Odd\n");
		}
	else if(x<0 && (x%2) == 0)
		{
		printf("Negative Even\n");
		}
	else if(x>0 && (x%2) != 0)
		{
		printf("Positive Odd\n");
		}
	else if(x>0 && (x%2) == 0)
		{
		printf("Positive Even\n");
		}
	getch();
	return 0;
}
