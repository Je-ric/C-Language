#include <stdio.h>

  int main() {
      int n, i;
      float marks[100], sum = 0, avg;
      
      printf("STUDENT GRADE TRACKER\\n");
      printf("Enter number of students (max 100): ");
      scanf("%d", &n);
      
      // Input marks for each student
      for(i = 0; i < n; i++) {
          printf("Enter marks for student %d: ", i+1);
          scanf("%f", &marks[i]);
          sum += marks[i];
      }
      
      // Calculate average
      avg = sum / n;
      
      // Display results
      printf("\\nResults:\\n");
      printf("Average marks: %.2f\\n", avg);
      
      printf("\\nStudent grades:\\n");
      for(i = 0; i < n; i++) {
          printf("Student %d: %.2f - ", i+1, marks[i]);
          
          if(marks[i] >= 90) {
              printf("A\\n");
          } else if(marks[i] >= 80) {
              printf("B\\n");
          } else if(marks[i] >= 70) {
              printf("C\\n");
          } else if(marks[i] >= 60) {
              printf("D\\n");
          } else {
              printf("F\\n");
          }
      }
      
      return 0;
  }