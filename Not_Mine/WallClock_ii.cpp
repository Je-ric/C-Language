#include<stdio.h>

#include<string.h>

#include<stdlib.h>
main()
{
 char *temp1[]=
{
"O Clock","Five","Ten","Quarter","Twenty","Half","Half","Half","Twenty","Quarter","Ten","Five"
}
;
 char *temp[]=
{
"0","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve"
}
;
 char time[5],substr[3][3];
 int i=0,j=0,k=0,hour,min,min1;
 printf("Enter time in HH:MM format like 01:15\n");
 gets(time);
 while(time[k]!='\0')//for splitting time 
{
 j=0;
 while(time[k]!=':'&&time[k]!='\0') 
{
 substr[i][j]=time[k];
 k++;
 j++;
 
}
 substr[i][j]='\0';
 i++;
 if(time[k]!='\0') 
{
 k++;
 
}
 
}
 int len=i;
 hour=atoi(substr[0]);
 min1=atoi(substr[1]);
 min=min1/5;
 if(hour<1||hour>12||min1<0||min1>59)//Validating Time 
{
 printf("Enter Valid Time\n");
 exit(0);
 
}
 else 
{
 if(min1>=5 && min1<=30) 
{
 printf("%s Past %s\n",temp1[min],temp[hour]);
 
}
 if(min1>=0&&min1<5) 
{
 printf("%s O' Clock",temp[hour]);
 
}
 if(min1>30&&min1<=44) 
{
 if(hour!=12) printf("%s Minutes to %s",temp1[min],temp[hour+1]);
 else printf("%s Minutes to One",temp1[min]);
 
}
 if(min1>=45&&min1<50) 
{
 if(hour!=12) printf("%s to %s",temp1[min],temp[hour+1]);
 else printf("%s to One",temp1[min]);
 
}
 if(min1>=50&&min1<=59) 
{
 if(hour!=12) printf("%s Minutes to %s",temp1[min],temp[hour+1]);
 else printf("%s Minutes to One",temp1[min]);
 
}
 
}
 printf("\n");

}
 

