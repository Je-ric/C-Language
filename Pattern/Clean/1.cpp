#include<stdio.h>
#include<conio.h>
int main()
{
		// mid = 5/2+1=3
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(j==3 || i==5 || ((i+j)==3 && j<=3))
							printf("%2d",1);
					else
							printf("%2c",' ');
					
		}
		return 0;
}