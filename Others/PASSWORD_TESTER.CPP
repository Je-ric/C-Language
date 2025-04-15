#include<conio.h>
#include <stdio.h>
void main(){
	clrscr();
char password[10],username[10], ch;
int i;

printf("Enter User name: ");
gets(username);
printf("Enter the password : ");
for(i=0;i < 8;i++)
{
ch = getch();
password[i] = ch;
ch = '*' ;
printf("%c",ch);
}
password[i] = '\0';

/* If you want to know what is username & password, you can print it*/
printf("\n\nYour username is : %s ",username);
printf("\nYour password is : %s",password);
getch();
}