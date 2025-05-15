#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main() {
      int choice, decimal;
      char binary[33], hex[17];
      
      printf("NUMBER SYSTEM CONVERTER\\n");
      printf("1. Decimal to Binary\\n");
      printf("2. Decimal to Hexadecimal\\n");
      printf("3. Binary to Decimal\\n");
      printf("4. Hexadecimal to Decimal\\n");
      printf("Enter your choice (1-4): ");
      scanf("%d", &choice);
      
      switch(choice) {
          case 1:
              printf("Enter a decimal number: ");
              scanf("%d", &decimal);
              
              // Convert to binary
              itoa(decimal, binary, 2);
              printf("%d in binary: %s\\n", decimal, binary);
              break;
              
          case 2:
              printf("Enter a decimal number: ");
              scanf("%d", &decimal);
              
              // Convert to hexadecimal
              itoa(decimal, hex, 16);
              printf("%d in hexadecimal: %s\\n", decimal, hex);
              break;
              
          case 3:
              printf("Enter a binary number: ");
              scanf("%s", binary);
              
              // Convert to decimal
              decimal = strtol(binary, NULL, 2);
              printf("%s in decimal: %d\\n", binary, decimal);
              break;
              
          case 4:
              printf("Enter a hexadecimal number: ");
              scanf("%s", hex);
              
              // Convert to decimal
              decimal = strtol(hex, NULL, 16);
              printf("%s in decimal: %d\\n", hex, decimal);
              break;
              
          default:
              printf("Invalid choice!\\n");
      }
      
      return 0;
  }