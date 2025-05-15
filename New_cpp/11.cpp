#include <stdio.h>

  int main() {
      int pin = 1234; // Default PIN
      int user_pin, choice;
      float balance = 1000.00; // Initial balance
      float amount;
      
      printf("SIMPLE ATM SIMULATION\\n");
      printf("Enter your PIN: ");
      scanf("%d", &user_pin);
      
      if(user_pin != pin) {
          printf("Invalid PIN! Access denied.\\n");
          return 1;
      }
      
      menu:
      printf("\\nATM MENU\\n");
      printf("1. Check Balance\\n");
      printf("2. Deposit\\n");
      printf("3. Withdraw\\n");
      printf("4. Exit\\n");
      printf("Enter your choice (1-4): ");
      scanf("%d", &choice);
      
      switch(choice) {
          case 1:
              printf("Your current balance: $%.2f\\n", balance);
              goto menu;
              
          case 2:
              printf("Enter deposit amount: $");
              scanf("%f", &amount);
              if(amount > 0) {
                  balance += amount;
                  printf("Deposit successful. New balance: $%.2f\\n", balance);
              } else {
                  printf("Invalid amount!\\n");
              }
              goto menu;
              
          case 3:
              printf("Enter withdrawal amount: $");
              scanf("%f", &amount);
              if(amount > 0 && amount <= balance) {
                  balance -= amount;
                  printf("Withdrawal successful. New balance: $%.2f\\n", balance);
              } else {
                  printf("Invalid amount or insufficient funds!\\n");
              }
              goto menu;
              
          case 4:
              printf("Thank you for using our ATM. Goodbye!\\n");
              break;
              
          default:
              printf("Invalid choice!\\n");
              goto menu;
      }
      
      return 0;
  }