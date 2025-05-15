 #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main() {
      int num_dice, i, roll;
      
      // Seed random number generator
      srand(time(0));
      
      printf("DICE ROLLER\\n");
      printf("Enter number of dice to roll: ");
      scanf("%d", &num_dice);
      
      printf("Rolling %d dice...\\n", num_dice);
      
      for(i = 0; i < num_dice; i++) {
          // Generate random number between 1 and 6
          roll = rand() % 6 + 1;
          printf("Die %d: %d\\n", i+1, roll);
      }
      
      return 0;
  }