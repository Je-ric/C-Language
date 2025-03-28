#include<stdio.h>
#include<conio.h>
#define MAX 100
void main(){
	clrscr();
	int arr[MAX],n,i,item,count=0,a[MAX];
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter element you want to search: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(arr[i]==item){
			a[count]=i+1;
			count++;
		}

	}
	if(count!=0){
		printf("\nItem found at:  ");
		for(i=0;i<count;i++){
			printf("%d ",a[i]);
		}

	}
	else{ printf("\nItem not found"); }
	getch();
}


