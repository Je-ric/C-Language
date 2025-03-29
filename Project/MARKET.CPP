#include<stdio.h>
#include<conio.h>

       float computeDisChange(float cash,float distotal){
		return cash - distotal; }
       float computeChange(float cash,float total){
		return cash - total; }
       float computeAmount(int price,int qty){
		return price * qty; }
       float computeTotal(float total,float amt){
		return total + amt; }

void main(){
New:
	clrscr();
	char firstname[20],lastname[20];
	int age;
	char again,ask;
	printf("\nEnter your First name: ");
	scanf("%s",&firstname);
	printf("Enter your Last name: ");
	scanf("%s",&lastname);
	printf("Enter your age: ");
	scanf("%d",&age);
Old:
	if(age>=60){
		goto WithDiscount;
		}
	else{
		goto WithoutDiscount;
		}

WithDiscount:{
	int order,qty,dis;
	int ord[25],qua[25];
	float price,amt,total=0,cash,change,distotal;
	char choice;
AgainOrder1:
	clrscr();
	printf("\t======================================================================");
	printf("\n        ||                *  MARKET CASHIER CALCULATOR  *	            ||");
	printf("\n\t======================================================================");
	printf("\n\t|| FRUIT                                                            ||");
	printf("\n\t||     [1] MELON...       40.00     [6] WATERMELON...    120.00     ||");
	printf("\n\t||     [2] BANANA...      60.00     [7] MANGO...          25.00     ||");
	printf("\n\t||     [3] APPLE...       25.00     [8] LEMON...          35.00     ||");
	printf("\n\t||     [4] GRAPES...      50.00     [9] RAMBUTAN...       35.00     ||");
	printf("\n\t||     [5] ORANGE...      25.00     [10] STRAWBERRY...    45.00     ||");
	printf("\n\t|| VEGETABLE 	                                                    ||");
	printf("\n\t||     [11] PETCHAY...    35.00     [16] CARROT...        50.00     ||");
	printf("\n\t||     [12] CABBAGE...    40.00     [17] SITAW...         20.00     ||");
	printf("\n\t||     [13] AMPALAYA...   20.00     [18] TOMATO...        25.00     ||");
	printf("\n\t||     [14] GINGER...     25.00     [19] ONION...         55.00     ||");
	printf("\n\t||     [15] OKRA...       20.00     [20] GARLIC...        20.00     ||");
	printf("\n\t|| MEAT                                                             ||");
	printf("\n\t||     [21] CHICKEN...   180.00     [24] BANGUS...       150.00     ||");
	printf("\n\t||     [22] PORK...      285.00     [25] TILAPIA...      130.00     ||");
	printf("\n\t||     [23] BEEF..       320.00                                     ||");
	printf("\n\t======================================================================\n");

OrderAgain1:

		printf("Enter order: ");
		scanf("%d",&order);
			if(order<=25){
				goto qty1;
				}
			else if(order>25){
				goto OrderAgain1;
				}
qty1:
	switch(order){
	case 1: price = 40.00; ord[0]=order;printf("You Select No.[%d] Melon\n",ord[0]);break;
	case 2: price = 60.00; ord[1]=order;printf("You Select No.[%d] Banana\n",ord[1]);break;
	case 3: price = 25.00; ord[2]=order;printf("You Select No.[%d] Apple\n",ord[2]);break;
	case 4: price = 50.00; ord[3]=order;printf("You Select No.[%d] Grapes\n",ord[3]);break;
	case 5: price = 25.00; ord[4]=order;printf("You Select No.[%d] Orange\n",ord[4]);break;
	case 6: price = 120.00; ord[5]=order;printf("You Select No.[%d] Watermelon\n",ord[5]);break;
	case 7: price = 25.00; ord[6]=order;printf("You Select No.[%d] Mango\n",ord[6]);break;
	case 8: price = 35.00; ord[7]=order;printf("You Select No.[%d] Lemon\n",ord[7]);break;
	case 9: price = 35.00; ord[8]=order;printf("You Select No.[%d] Rambutan\n",ord[8]);break;
	case 10: price = 45.00; ord[9]=order;printf("You Select No.[%d] Strawberry\n",ord[9]);break;
	case 11: price = 35.00; ord[10]=order;printf("You Select No.[%d] Petchay\n",ord[10]);break;
	case 12: price = 40.00; ord[11]=order;printf("You Select No.[%d] Cabbage\n",ord[11]);break;
	case 13: price = 20.00; ord[12]=order;printf("You Select No.[%d] Ampalaya\n",ord[12]);break;
	case 14: price = 25.00; ord[13]=order;printf("You Select No.[%d] Ginger\n",ord[13]);break;
	case 15: price = 20.00; ord[14]=order;printf("You Select No.[%d] Okra\n",ord[14]);break;
	case 16: price = 50.00; ord[15]=order;printf("You Select No.[%d] Carrot\n",ord[15]);break;
	case 17: price = 20.00; ord[16]=order;printf("You Select No.[%d] Sitaw\n",ord[16]);break;
	case 18: price = 25.00; ord[17]=order;printf("You Select No.[%d] Tomato\n",ord[17]);break;
	case 19: price = 55.00; ord[18]=order;printf("You Select No.[%d] Onion\n",ord[18]);break;
	case 20: price = 20.00; ord[19]=order;printf("You Select No.[%d] Garlic\n",ord[19]);break;
	case 21: price = 180.00;ord[20]=order;printf("You Select No.[%d] Chicken\n",ord[20]);break;
	case 22: price = 285.00;ord[21]=order;printf("You Select No.[%d] Pork\n",ord[21]);break;
	case 23: price = 320.00;ord[22]=order;printf("You Select No.[%d] Beef\n",ord[22]);break;
	case 24: price = 150.00;ord[23]=order;printf("You Select No.[%d] Bangus\n",ord[23]);break;
	case 25: price = 130.00;ord[24]=order;printf("You Select No.[%d] Tilapia\n",ord[24]);break;}

			printf("Enter quantity: ");
			scanf("%d",&qty);

	switch(order){
	case 1: qua[0]=qty;printf("You ordered %d Melon\n",qua[0]);break;
	case 2: qua[1]=qty;printf("You ordered %d Banana\n",qua[1]);break;
	case 3: qua[2]=qty;printf("You ordered %d Apple\n",qua[2]);break;
	case 4: qua[3]=qty;printf("You ordered %d Grapes\n",qua[3]);break;
	case 5: qua[4]=qty;printf("You ordered %d Orange\n",qua[4]);break;
	case 6: qua[5]=qty;printf("You ordered %d Watermelon\n",qua[5]);break;
	case 7: qua[6]=qty;printf("You ordered %d Mango\n",qua[6]);break;
	case 8: qua[7]=qty;printf("You ordered %d Lemon\n",qua[7]);break;
	case 9: qua[8]=qty;printf("You ordered %d Rambutan\n",qua[8]);break;
	case 10: qua[9]=qty;printf("You ordered %d Strawberry\n",qua[9]);break;		
	case 11: qua[10]=qty;printf("You ordered %d Petchay\n",qua[10]);break;
	case 12: qua[11]=qty;printf("You ordered %d Cabbange\n",qua[11]);break;
	case 13: qua[12]=qty;printf("You ordered %d Ampalaya\n",qua[12]);break;
	case 14: qua[13]=qty;printf("You ordered %d Ginger\n",qua[13]);break;
	case 15: qua[14]=qty;printf("You ordered %d Okra\n",qua[14]);break;
	case 16: qua[15]=qty;printf("You ordered %d Carrot\n",qua[15]);break;
	case 17: qua[16]=qty;printf("You ordered %d Sitaw\n",qua[16]);break;
	case 18: qua[17]=qty;printf("You ordered %d Tomato\n",qua[17]);break;
	case 19: qua[18]=qty;printf("You ordered %d Onion\n",qua[18]);break;
	case 20: qua[19]=qty;printf("You ordered %d Garlic\n",qua[19]);break;
	case 21: qua[20]=qty;printf("You ordered %d Chicken\n",qua[20]);break;
	case 22: qua[21]=qty;printf("You ordered %d Pork\n",qua[21]);break;
	case 23: qua[22]=qty;printf("You ordered %d Beef\n",qua[22]);break;
	case 24: qua[23]=qty;printf("You ordered %d Bangus\n",qua[23]);break;
	case 25: qua[24]=qty;printf("You ordered %d Tilapia\n",qua[24]);break;}

			amt = computeAmount(price,qty);
			total = computeTotal(total,amt);

StopOrder1:
		printf("Add another order[Y/N]? ");
		scanf(" %c",&choice);
			if(choice=='Y'|| choice=='y'){
				goto AgainOrder1;
				}
			else if(choice=='N'|| choice=='n'){
				}
			else{
				goto StopOrder1;
				}

		clrscr();
		printf("=========================================");
		printf("\n\t   * R E C E I P T *");
		printf("\n=========================================");

		printf("\nCustomer: \t\t%s %s",firstname,lastname);
		printf("\nAge:\t\t\t%d",age);

		printf("\nTotal:\t\t\t%.2f",total);
			dis = total*10/100;
			distotal = (total-dis);
		printf("\nDiscount:\t\t10%(Senior Citizen)");{
		printf("\nDiscounted Total:\t%.2f",distotal);
		do{
			printf("\nCash Payment:\t        ");
			scanf("%f",&cash);
			}while(cash < distotal);

			change=computeDisChange(cash,distotal);
			printf("Change:\t\t\t%.2f",change);

		printf("\n_________________________________________");
		printf("\n\tThanks for visiting ^_^");
		printf("\n-----------------------------------------");
		}}
		goto done;


WithoutDiscount:{
	int order,qty;
	int ord[25],qua[25];
	float price,amt,total=0,cash,change;
	char choice;
AgainOrder2:
	clrscr();
	printf("\t======================================================================");
	printf("\n        ||                *  MARKET CASHIER CALCULATOR  *	            ||");
	printf("\n\t======================================================================");
	printf("\n\t|| FRUIT                                                            ||");
	printf("\n\t||     [1] MELON...       40.00     [6] WATERMELON...    120.00     ||");
	printf("\n\t||     [2] BANANA...      60.00     [7] MANGO...          25.00     ||");
	printf("\n\t||     [3] APPLE...       25.00     [8] LEMON...          35.00     ||");
	printf("\n\t||     [4] GRAPES...      50.00     [9] RAMBUTAN...       35.00     ||");
	printf("\n\t||     [5] ORANGE...      25.00     [10] STRAWBERRY...    45.00     ||");
	printf("\n\t|| VEGETABLE 	                                                    ||");
	printf("\n\t||     [11] PETCHAY...    35.00     [16] CARROT...        50.00     ||");
	printf("\n\t||     [12] CABBAGE...    40.00     [17] SITAW...         20.00     ||");
	printf("\n\t||     [13] AMPALAYA...   20.00     [18] TOMATO...        25.00     ||");
	printf("\n\t||     [14] GINGER...     25.00     [19] ONION...         55.00     ||");
	printf("\n\t||     [15] OKRA...       20.00     [20] GARLIC...        20.00     ||");
	printf("\n\t|| MEAT                                                             ||");
	printf("\n\t||     [21] CHICKEN...   180.00     [24] BANGUS...       150.00     ||");
	printf("\n\t||     [22] PORK...      285.00     [25] TILAPIA...      130.00     ||");
	printf("\n\t||     [23] BEEF..       320.00                                     ||");
	printf("\n\t======================================================================\n");

OrderAgain2:
		printf("Enter order: ");
		scanf("%d",&order);
			if(order<=25){
				goto qty2;
				}
			else if(order>25){
				goto OrderAgain2;
				}
qty2:

	switch(order){
	case 1: price = 40.00; ord[0]=order;printf("You Select No.[%d] Melon\n",ord[0]);break;
	case 2: price = 60.00; ord[1]=order;printf("You Select No.[%d] Banana\n",ord[1]);break;
	case 3: price = 25.00; ord[2]=order;printf("You Select No.[%d] Apple\n",ord[2]);break;
	case 4: price = 50.00; ord[3]=order;printf("You Select No.[%d] Grapes\n",ord[3]);break;
	case 5: price = 25.00; ord[4]=order;printf("You Select No.[%d] Orange\n",ord[4]);break;
	case 6: price = 120.00; ord[5]=order;printf("You Select No.[%d] Watermelon\n",ord[5]);break;
	case 7: price = 25.00; ord[6]=order;printf("You Select No.[%d] Mango\n",ord[6]);break;
	case 8: price = 35.00; ord[7]=order;printf("You Select No.[%d] Lemon\n",ord[7]);break;
	case 9: price = 35.00; ord[8]=order;printf("You Select No.[%d] Rambutan\n",ord[8]);break;
	case 10: price = 45.00; ord[9]=order;printf("You Select No.[%d] Strawberry\n",ord[9]);break;
	case 11: price = 35.00; ord[10]=order;printf("You Select No.[%d] Petchay\n",ord[10]);break;
	case 12: price = 40.00; ord[11]=order;printf("You Select No.[%d] Cabbage\n",ord[11]);break;
	case 13: price = 20.00; ord[12]=order;printf("You Select No.[%d] Ampalaya\n",ord[12]);break;
	case 14: price = 25.00; ord[13]=order;printf("You Select No.[%d] Ginger\n",ord[13]);break;
	case 15: price = 20.00; ord[14]=order;printf("You Select No.[%d] Okra\n",ord[14]);break;
	case 16: price = 50.00; ord[15]=order;printf("You Select No.[%d] Carrot\n",ord[15]);break;
	case 17: price = 20.00; ord[16]=order;printf("You Select No.[%d] Sitaw\n",ord[16]);break;
	case 18: price = 25.00; ord[17]=order;printf("You Select No.[%d] Tomato\n",ord[17]);break;
	case 19: price = 55.00; ord[18]=order;printf("You Select No.[%d] Onion\n",ord[18]);break;
	case 20: price = 20.00; ord[19]=order;printf("You Select No.[%d] Garlic\n",ord[19]);break;
	case 21: price = 180.00;ord[20]=order;printf("You Select No.[%d] Chicken\n",ord[20]);break;
	case 22: price = 285.00;ord[21]=order;printf("You Select No.[%d] Pork\n",ord[21]);break;
	case 23: price = 320.00;ord[22]=order;printf("You Select No.[%d] Beef\n",ord[22]);break;
	case 24: price = 150.00;ord[23]=order;printf("You Select No.[%d] Bangus\n",ord[23]);break;
	case 25: price = 130.00;ord[24]=order;printf("You Select No.[%d] Tilapia\n",ord[24]);break;}

			printf("Enter quantity: ");
			scanf("%d",&qty);

	switch(order){
	case 1: qua[0]=qty;printf("You ordered %d Melon\n",qua[0]);break;
	case 2: qua[1]=qty;printf("You ordered %d Banana\n",qua[1]);break;
	case 3: qua[2]=qty;printf("You ordered %d Apple\n",qua[2]);break;
	case 4: qua[3]=qty;printf("You ordered %d Grapes\n",qua[3]);break;
	case 5: qua[4]=qty;printf("You ordered %d Orange\n",qua[4]);break;
	case 6: qua[5]=qty;printf("You ordered %d Watermelon\n",qua[5]);break;
	case 7: qua[6]=qty;printf("You ordered %d Mango\n",qua[6]);break;
	case 8: qua[7]=qty;printf("You ordered %d Lemon\n",qua[7]);break;
	case 9: qua[8]=qty;printf("You ordered %d Rambutan\n",qua[8]);break;
	case 10: qua[9]=qty;printf("You ordered %d Strawberry\n",qua[9]);break;		case 11: qua[10]=qty;printf("You ordered %d Petchay\n",qua[10]);break;
	case 12: qua[11]=qty;printf("You ordered %d Cabbange\n",qua[11]);break;
	case 13: qua[12]=qty;printf("You ordered %d Ampalaya\n",qua[12]);break;
	case 14: qua[13]=qty;printf("You ordered %d Ginger\n",qua[13]);break;
	case 15: qua[14]=qty;printf("You ordered %d Okra\n",qua[14]);break;
	case 16: qua[15]=qty;printf("You ordered %d Carrot\n",qua[15]);break;
	case 17: qua[16]=qty;printf("You ordered %d Sitaw\n",qua[16]);break;
	case 18: qua[17]=qty;printf("You ordered %d Tomato\n",qua[17]);break;
	case 19: qua[18]=qty;printf("You ordered %d Onion\n",qua[18]);break;
	case 20: qua[19]=qty;printf("You ordered %d Garlic\n",qua[19]);break;
	case 21: qua[20]=qty;printf("You ordered %d Chicken\n",qua[20]);break;
	case 22: qua[21]=qty;printf("You ordered %d Pork\n",qua[21]);break;
	case 23: qua[22]=qty;printf("You ordered %d Beef\n",qua[22]);break;
	case 24: qua[23]=qty;printf("You ordered %d Bangus\n",qua[23]);break;
	case 25: qua[24]=qty;printf("You ordered %d Tilapia\n",qua[24]);break;}

			amt = computeAmount(price,qty);
			total = computeTotal(total,amt);

StopOrder2:
		printf("Add another order[Y/N]? ");
		scanf(" %c",&choice);
			if(choice=='Y'|| choice=='y'){
				goto AgainOrder2;
				}
			else if(choice=='N'|| choice=='n'){
				}
			else{
				goto StopOrder2;
				}
		clrscr();
		printf("=========================================");
		printf("\n\t   * R E C E I P T *");
		printf("\n=========================================");

		printf("\nCustomer: \t\t%s %s",firstname,lastname);
		printf("\nAge:\t\t\t%d",age);
		printf("\nTotal:\t\t\t%.2f",total);

			do{
			printf("\nCash Payment:\t        ");
			scanf("%f",&cash);
			}while(cash < total);

			change=computeChange(cash,total);
			printf("Change:\t\t\t%.2f",change);

		printf("\n_________________________________________");
		printf("\n\tThanks for visiting ^_^");
		printf("\n-----------------------------------------");
		}
done:
		printf("\n    Would you like to order[Y/N]? ");
		scanf(" %c",&ask);
		if(ask == 'Y' || ask == 'y'){
			goto ask;
			}
		else if(ask == 'N' || ask == 'n'){
			goto ignore;
			}
		else{
			goto done;
			}
ask:
		printf("\nAre you a new customer or you're the previous customer? ");
		printf("\n[Y] I'm a new customer");
		printf("\n[N] I'm the previous customer");
		printf("\nAnswer: ");
		scanf(" %c",&again);
		if (again == 'Y' || again == 'y'){
			goto New;
			}
		else if(again == 'N' || again == 'n'){
			goto Old;
			}
		else{
			goto ask;
			}
ignore:
		printf("\n_________________________________________");
		printf("\n      Thanks again for visiting ^_^");
		printf("\n-----------------------------------------");


		getch();
}