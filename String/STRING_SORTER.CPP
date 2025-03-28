#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	clrscr();
	int i,j,n;
	char str[50][50],temp[50];

	printf("Enter the number of input to be sorted : ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	gets(str[i]);

	for(i=0;i<=n;i++)
		for(j=i+1;j<=n;j++){
		if(strcmp(str[i],str[j])>0){
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
	}

	printf("\nThe sorted string");
	for(i=0;i<=n;i++)
	puts(str[i]);
	getch();
	return 0;
}

