#include<stdio.h>
#include<conio.h>
void main(){
	int a[50],b[50],n1,n2,i,x;
	clrscr();
	printf("Enter the number of elements in the first array: ");
	scanf("%d",&n1);
	printf("Enter the elements: \n");
	for(i=0;i<n1;i++){
		printf("Enter [%d] ",i+1);
		scanf("%d",&a[i]);
		}
	printf("Enter the number of elements in the second array: ");
	scanf("%d",&n2);
	printf("Enter the elements: \n");
	for(i=0;i<n2;i++){
		printf("Enter [%d] ",i+1);
		scanf("%d",&b[i]);
		}
	for(x=0;x<n1;x++){
	for(i=0;i<n2;i++){
	if(b[i]==a[x]){
		b[i]=' ';
		}
	}
	}
	for(i=0;i<n1;i++){
	printf("%d ",a[i]);
	}
	for(i=0;i<n2;i++){
	if(b[i]==' ')
		continue;
	else
	printf("%d ",b[i]);
	}
	getch();
}