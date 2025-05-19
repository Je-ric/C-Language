#include<stdio.h>
#include<conio.h>
int main(){
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(i==1 || j==1 || j==5 || i==5 || (i+j)==6)
							printf("%2d",0);
					else
							printf("%2c",' ');
					
		}
		return 0;
}
/*


#include<stdio.h>
#include<conio.h>
int main()
{
		
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(i==1 || i==3 || i==5 || j==1 || j==5)
							printf("%2d",8);
					else
							printf("%2c",' ');
					
		}
		return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
		
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(i==1 || i==3 || i==5 || j==5 || (j==1 && i<=3))
							printf("%2d",9);
					else
							printf("%2c",' ');
					
		}
		return 0;
}
*/