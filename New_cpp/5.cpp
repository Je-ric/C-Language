 #include <stdio.h>

  int main() {
      int choice;
      float weight, converted;
      
      printf("WEIGHT CONVERTER\\n");
      printf("1. Kilograms to Pounds\\n");
      printf("2. Pounds to Kilograms\\n");
      printf("3. Grams to Ounces\\n");
      printf("4. Ounces to Grams\\n");
      printf("Enter your choice (1-4): ");
      scanf("%d", &choice);
      
      switch(choice) {
          case 1:
              printf("Enter weight in kilograms: ");
              scanf("%f", &weight);
              converted = weight * 2.20462;
              printf("%.2f kilograms = %.2f pounds\\n", weight, converted);
              break;
              
          case 2:
              printf("Enter weight in pounds: ");
              scanf("%f", &weight);
              converted = weight / 2.20462;
              printf("%.2f pounds = %.2f kilograms\\n", weight, converted);
              break;
              
          case 3:
              printf("Enter weight in grams: ");
              scanf("%f", &weight);
              converted = weight * 0.035274;
              printf("%.2f grams = %.2f ounces\\n", weight, converted);
              break;
              
          case 4:
              printf("Enter weight in ounces: ");
              scanf("%f", &weight);
              converted = weight / 0.035274;
              printf("%.2f ounces = %.2f grams\\n", weight, converted);
              break;
              
          default:
              printf("Invalid choice!\\n");
      }
      
      return 0;
  }