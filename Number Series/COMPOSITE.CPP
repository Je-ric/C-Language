
#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int type, composite = 0;
	int b,e,i,j,limit,n;
	printf("[1] Composite Numbers upto(n)\n");
	printf("[2] Composite Numbers between\n");
	printf("[3] Check specific n if composite or not\n");
	printf("Select: ");
	scanf("%d",&type);

	switch(type){
	case 1: clrscr();
		printf("[1] Composite Numbers upto(n)\n\n");
		printf("Enter limit: ");
		scanf("%d", &limit);

		for(i=2;i<=limit;i++){
			composite = 0;
		for(j=i-1;j>1;j--){
			if(i%j==0)
			composite=1;}
			if(composite==1)
			printf("%d ",i);}
			printf("\n");
	break;
	case 2: clrscr();
		printf("[2] Composite Numbers between\n\n");
		printf("Enter begin: ");
		scanf("%d", &b);
		printf("Enter end: ");
		scanf("%d", &e);
		for(i=b;i<=e;i++){
			composite = 0;
		for(j=i-1;j>1;j--){
			if(i%j==0)
			composite=1;}
			if(composite==1)
			printf("%d ",i);}
			printf("\n");
	break;
	case 3:	clrscr();
		printf("[3] Check specific n if composite or not\n\n");
		printf("Enter limit: ");
		scanf("%d", &n);

		for(i=n;i<=n;i++){
			composite = 0;
		for(j=i-1;j>1;j--){
			if(i%j==0)
			composite=1;}
		if(composite==1)
			printf("%d is composite ",i);
		else printf("%d is not composite",i);}
	break;
	default: clrscr(); printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t  INVALID"); }
	getch();
}