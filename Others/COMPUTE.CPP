#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main(){
	char str[100];
	char str1[100];
	char str2[100];
	char str3[100];
	char str4[1000];
	char ch;
	int i,j,l,k=0,m=0,d=0,x=0;
	float num,num1,sum=0;
	printf("Input you equation to be sloved\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
		k=0;
		m=0;
		for(x=0;x<=d;x++)
			str4[x]='\0';
		for(j=0;j<=i;j++){
			str1[k]=str[j];
			k++;}
		l=i;
		ch=str[l];
		l++;
	while(!(str[l]=='+'||str[l]=='-'||str[l]=='*'||str[l]=='/'||str[l]=='\0')){
		str2[m]=str[l];
		l++;
		m++;}
	num=atof(str1);
	num1=atof(str2);
	if(ch=='+')
		sum=num+num1;
	if(ch=='-')
		sum=num-num1;
	if(ch=='*')
		sum=num*num1;
	if(ch=='/')
		sum=num/num1;
	sprintf(str3,"%.2f",sum);
	j=0;
	int x=i;
	for(i=l;str[i]!='\0';i++){
		str4[j]=str[i];
		j++;}
	d=j;
	strcat(str3,str4);
	strcpy(str,str3);
	i=-1;
	}
	}
	printf("Output: ");
	printf("%.2f\n",sum);
	getch();
}
