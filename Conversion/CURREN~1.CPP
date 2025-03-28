#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	char choice;
	printf("Enter\n");
	printf("a)Currency Conversion\n");
	printf("b)Length Conversion\n");
	printf("c)Speed Conversion\n");
	scanf("%c",&choice);
	switch(choice){
	case 'a':{
	case 'A':
		int currencyChoice;
		printf("Enter\n");
		printf("1)Rupee to Dollar\n");
		printf("2)Dollar to Rupee\n");
		printf("3)Rupee to Euro\n");
		printf("4)Euro to Rupee\n");
	scanf("%d",&currencyChoice);
	switch(currencyChoice){
	case 1:{
		float rupee,dollar;
		printf("Enter Amount in rupees\n");
		scanf("%f",&rupee);
		dollar=(rupee*0.0149);
		printf("%.2f INR=%f $\n",rupee,dollar);
		break;
		}
	case 2:{
		float rupee,dollar;
		printf("Enter Amount in Dollars\n");
		scanf("%f",&dollar);
		rupee=(dollar*67.06);
		printf("%.2f $=%f INR\n",dollar,rupee);
		break;
		}
	case 3:{
		float rupee,euro;
		printf("Enter Amount in rupees\n");
		scanf("%f",&rupee);
		euro=(float)(rupee*0.0141);
		printf("%.2f INR=%f EUR\n",rupee,euro);
		break;
		}
	case 4:{
		float rupee,euro;
		printf("Enter Amount in Euro\n");
		scanf("%f",&euro);
		rupee=(float)(euro*71.1574);
		printf("%.2f EUR=%f INR\n",euro,rupee);
		break;
		}
	default:{ printf("Enter Valid Currency Choice\n");
		}
	}
		break;
		}
	case 'b':{
	case 'B':
		int lengthConversion;
		printf("Enter\n1)m to cm\n2)cm to m\n3)km to m\n4)m to km\n");
		scanf("%d",&lengthConversion);
		switch(lengthConversion){
	case 1:{
		float m;
		printf("Enter meters\n");
		scanf("%f",&m);
		printf("%.3f m=%.2f cm\n",m,(m*100));
		break;
		}
	case 2:{
		float cm;
		printf("Enter Centi meters\n");
		scanf("%f",&cm);
		printf("%.3f cm=%.2f m\n",cm,(cm*0.01));
		break;
		}
	case 3:{
		float km;
		printf("Enter Kilo meters\n");
		scanf("%f",&km);
		printf("%.3f km=%.2f m\n",km,(km*1000));
		break;
		}
	case 4:{
		float m;
		printf("Enter meters\n");
		scanf("%f",&m);
		printf("%.3f m=%.2f km\n",m,(m*0.001));
		break;
		}
	default:{ printf("Enter Valid Meter Conversion Choice\n");
		}
	}
		break;
		}
	case 'c':{
	case 'C':
		int speedChoice;
		printf("Enter\n");
		printf("1)m/s to km/s\n");
		printf("2)km/s to m/s\n");
		printf("3)km/h to m/s\n");
		printf("4)m/s to km/h");
		scanf("%d",&speedChoice);
		switch(speedChoice){
	case 1:{
		float ms;
		printf("Enter m/s\n");
		scanf("%f",&ms);
		printf("%f m/s = %f km/s\n",ms,(ms*0.001));
		break;
		}
	case 2:{
		float kms;
		printf("Enter km/s\n");
		scanf("%f",&kms);
		printf("%f km/s = %f m/s\n",kms,(kms*1000));
		break;
		}
	case 3:{
		float kmh;
		printf("Enter km/h\n");
		scanf("%f",&kmh);
		printf("%f km/h = %f m/s\n",kmh,(kmh*0.277777778));
		break;
		}
	case 4:{
		float ms;
		printf("Enter m/s\n");
		scanf("%f",&ms);
		printf("%f m/s = %f km/h\n",ms,(ms*3.6));
		break;
		}
	default:{ printf("Enter Valid Speed Conversion Choice\n");
		break;
		}
	}
	 break;
	}
	default:{ printf("Enter valid Choice\n");
		break;
		}
	}
	getch();
	return 0;
}
 

