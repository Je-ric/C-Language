#include<stdio.h>

#include<string.h>

#include<stdlib.h>
int CheckLeapyear(int year);
int CheckDateFormat(int day,int month,int year,int leap,int *assignMonth);
main()
{
 int i=0,j,year,day,mnth,k=0,checkYear,assignMonth[12],noOfDays=0,checkFormat;
 char str[10],split,substr[3][4];
 printf("Enter Date in dd-mm-yyyy or dd/mm/yyyy format like 01-02-1018\n");
 gets(str);
 if(str[2]=='-') 
{
 split='-';
 
}
 else if(str[2]=='/') 
{
 split='/';
 
}
 else 
{
 printf("Enter Date Format in dd/mm/yyyy or dd-mm-yyyy if 1 is there enter 01\n");
 exit(0);
 
}
 //Splitting entered date into day,month,year while(str[k]!='\0') 
{
 j=0;
 while(str[k]!=split&&str[k]!='\0') 
{
 substr[i][j]=str[k];
 k++;
 j++;
 
}
 substr[i][j]='\0';
 i++;
 if(str[k]!='\0') 
{
 k++;
 
}
 
}
 day=atoi(substr[0]);
 mnth=atoi(substr[1]);
 year=atoi(substr[2]);
 checkYear=CheckLeapyear(year);
 //Assigning months for(i=1;i<=12;i++) 
{
 if(i<8) 
{
 if(i%2!=0) 
{
 assignMonth[i]=31;
 
}
 if(i%2==0&&i!=2) 
{
 assignMonth[i]=30;
 
}
 
}
 if(i>8) 
{
 if(i%2!=0) 
{
 assignMonth[i]=30;
 
}
 if(i%2==0&&i!=2) 
{
 assignMonth[i]=31;
 
}
 
}
 if(i==2) 
{
 if(checkYear==1) 
{
 assignMonth[i]=29;
 
}
 else 
{
 assignMonth[i]=28;
 
}
 
}
 if(i==8) 
{
 assignMonth[i]=31;
 
}
 
}
 checkFormat=CheckDateFormat(day,mnth,year,checkYear,assignMonth);
 if(checkFormat==1) 
{
 for(i=1;i<=12;i++) 
{
 if(i<mnth) 
{
 noOfDays+=assignMonth[i];
 
}
 if(i==mnth) 
{
 noOfDays+=day;
 
}
 if(i>mnth) 
{
 break;
 
}
 
}
 
}
 else 
{
 printf("Enter Valid Date\n");
 exit(0);
 
}
 printf("Number of days since 01-01-%d till %d-%d-%d is %d\n",year,day,mnth,year,noOfDays);

}
int CheckLeapyear(int year)
{
 if(year%400==0) 
{
 return 1;
 
}
 else if(year%100==0) 
{
 return 0;
 
}
 else if(year%4==0) 
{
 return 1;
 
}
 else 
{
 return 0;
 
}

}
int CheckDateFormat(int day,int month,int year,int checkyear,int *assignMonth)
{
 int i;
 //Checking day if(day<=assignMonth[month]&&day>=1&&month<=12&&month>=1) 
{
 return 1;
 
}
 else 
{
 return 0;
 
}

}
 

