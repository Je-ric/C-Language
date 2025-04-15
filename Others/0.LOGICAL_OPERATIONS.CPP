#include <stdio.h>
#include <conio.h>

void main(){
	clrscr();
	int a, b, c, d, result;
	printf("1 = TRUE\n");
	printf("2 = FALSE\n");
	printf("&& = atleast one false is false\n");
	printf("|| = atleast one true is true\n");
	printf("! = opposite\n");
	printf("================================================================\n");
	printf("|      AND (&&)        |      OR (||)        |   NEGATION (!)  |\n");
	printf("================================================================\n");
	printf("|  C1  -  C2  = Answer |  C1  -  C2 = Answer |   C  -  Answer  |\n");
	printf("|  T   -  T   =   T    |   T  -  T  =   T    |   T  -    F     |\n");
	printf("|  T   -  F   =   F    |   T  -  F  =   T    |   F  -    T     |\n");
	printf("|  F   -  T   =   F    |   F  -  T  =   T    | ^_^   ^_^   ^_^ |\n");
	printf("|  F   -  F   =   F    |   F  -  F  =   F    |    ^_^   ^_^    |\n");
	printf("================================================================\n");
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
scanf("%d",&b);
printf("Enter value of c: ");
scanf("%d",&c);
printf("Enter value of d: ");
scanf("%d",&d);

result = (a>b && c<d);
printf("a>b && c<d = %d\n",result);
result = (a>c || b>d);
printf("a>c || b>d = %d\n",result);
result = !(b<c);
printf("!(b<c) = %d\n",result);
result = !(a>d);
printf("!(a>d) = %d\n",result);

getch();
}