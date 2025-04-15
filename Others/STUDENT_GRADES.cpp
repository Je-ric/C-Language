#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int student_id;
    int grades[5];
};

struct Student students[3];

int main(){
	clrscr();


	for(int i=0; i<3; i++) {
	printf("Enter information for student %d:\n", i+1);

	printf("Name: ");
	getchar();
	gets(students[i].name);

	printf("Student ID: ");
	scanf("%d", &students[i].student_id);

	printf("Grades for 5 subjects: ");
	for (int j=0; j<5; j++) {
		scanf("%d", &students[i].grades[j]);
		}
	}

	for (int i=0; i<3; i++){
	int total = 0, remark = 0;
		for(int j=0; j<5; j++) {
			total += students[i].grades[j];
			if(total / 5 >= 75){
				remark = 1;
				}
			else{
			}

	}
	printf("\nStudent %d:\n", i+1);
	printf("Name: %s\n", students[i].name);
	printf("Student ID: %d\n", students[i].student_id);
	printf("Grades: ");
	for (int j=0; j<5; j++) {
	    printf("%d ", students[i].grades[j]);
	}
		printf("\nTotal Grades: %d\n", total);
		printf("Average Grades: %d\n", total / 5 );
   
		printf("Average Grades: %.1f \n", (float)total / 5 );
		if(remark == 1){
			printf("Remarks: Passed\n");
		}else{
			printf("Remarks: Failed\n");
		}
	}
	getch();
	return 0;
}
    