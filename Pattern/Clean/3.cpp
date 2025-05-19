#include<stdio.h>
#include<conio.h>
int main()
{
		//mid=5/2+1=3
		int i,j;
		for(i=1;i<=5;i++)
		{
			printf("\n");
			for(j=1;j<=5;j++)
					if(i==3 || i==5 || i==1 || (j==1 && i>=3) || (j==5 && i<3))
							printf("%2d",2);
					else
							printf("%2c",' ');
					
		}
		return 0;
}