
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