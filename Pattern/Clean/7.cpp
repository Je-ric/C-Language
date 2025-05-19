#include<stdio.h>
#include<conio.h>
int main()
{
		
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(i==1 || j==1 || i==5 || i==3 || (j==5 && i>=3))
							printf("%2d",6);
					else
							printf("%2c",' ');
					
		}
		return 0;
}