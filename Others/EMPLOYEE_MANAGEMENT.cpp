#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Employee {
    char name[50];
    int employee_id;
    float salary;
};

int main() {
	struct Employee employees[5];

	for(int i=0; i<5; i++){
		printf("Enter information for employee %d:\n", i+1);
		printf("Name: ");
		gets(employees[i].name);
		printf("Employee ID: ");
		scanf("%d", &employees[i].employee_id);
		printf("Salary: ");
		scanf("%f", &employees[i].salary);
   getchar();
		//fflush(stdin);
	}

	printf("\n");
	printf("---------------------------------------------------\n");
	printf("|NAME    |Employee ID        |Salary        |\n");
	printf("---------------------------------------------------\n");
	for (int i=0; i<5; i++){
		printf("|%s    |%d        |%.2f        |\n",
		employees[i].name,employees[i].employee_id,employees[i].salary);
	}
	printf("---------------------------------------------------\n");
	getch();
	return 0;
}
    