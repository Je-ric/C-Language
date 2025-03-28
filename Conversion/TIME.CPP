#include <stdio.h>
#include<conio.h>

int main() {
	clrscr();
	int choice;
	double time;
	printf("Select the unit of time to convert:\n");
	printf("1. Second\n2. Minute\n3. Hour\n4. Day\n5. Week\n6. Month\n7. Year\n");
	printf("Option: ");
	scanf("%d", &choice);
	printf("Enter the time to convert: ");
	scanf("%lf", &time);

	switch (choice) {
	case 1: // Second
	    printf("%.2lf seconds is equivalent to:\n", time);
	    printf("%.2lf minutes\n", time/60);
	    printf("%.2lf hours\n", time/3600);
	    printf("%.2lf days\n", time/86400);
	    printf("%.2lf weeks\n", time/604800);
	    printf("%.2lf months\n", time/2628000);
	    printf("%.2lf years\n", time/31536000);
	    break;
	case 2: // Minute
	    printf("%.2lf minutes is equivalent to:\n", time);
	    printf("%.2lf seconds\n", time*60);
	    printf("%.2lf hours\n", time/60);
	    printf("%.2lf days\n", time/1440);
	    printf("%.2lf weeks\n", time/10080);
	    printf("%.2lf months\n", time/43800);
	    printf("%.2lf years\n", time/525600);
	    break;
	case 3: // Hour
	    printf("%.2lf hours is equivalent to:\n", time);
	    printf("%.2lf seconds\n", time*3600);
	    printf("%.2lf minutes\n", time*60);
	    printf("%.2lf days\n", time/24);
	    printf("%.2lf weeks\n", time/168);
	    printf("%.2lf months\n", time/730);
	    printf("%.2lf years\n", time/8760);
	    break;
	case 4: // Day
	    printf("%.2lf days is equivalent to:\n", time);
	    printf("%.2lf seconds\n", time*86400);
	    printf("%.2lf minutes\n", time*1440);
	    printf("%.2lf hours\n", time*24);
	    printf("%.2lf weeks\n", time/7);
	    printf("%.2lf months\n", time/30.42);
	    printf("%.2lf years\n", time/365);
	    break;
	case 5: // Week
	    printf("%.2lf weeks is equivalent to:\n", time);
	    printf("%.2lf seconds\n", time*604800);
	    printf("%.2lf minutes\n", time*10080);
	    printf("%.2lf hours\n", time*168);
	    printf("%.2lf days\n", time*7);
	    printf("%.2lf months\n", time/4.35);
	    printf("%.2lf years\n", time/52.14);
	    break;
	case 6: // Month
	    printf("%.2lf months is equivalent to:\n", time);
	    printf("%.2lf seconds\n", time*2628000);
	    printf("%.2lf minutes\n", time*43800);
	    printf("%.2lf hours\n", time*730);
	    printf("%.2lf days\n", time*30.42);
	    printf("%.2lf weeks\n", time*4.35);
	    printf("%.2lf years\n", time/12);
	    break;
	case 7: // Year
	    printf("%.2lf years is equivalent to:\n",time);
	    printf("%.2lf seconds\n", time*3153600);
	    printf("%.2lf minutes\n", time*365*24*60);
	    printf("%.2lf hours\n", time*354*24);
	    printf("%.2lf days\n", time*365);
	    printf("%.2lf weeks\n", time*52);
	    printf("%.2lf months\n", time*12);

	    default: printf("None");
		      }
	    getch();
	    return 0;
}
