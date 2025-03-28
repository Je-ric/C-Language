#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
   char str[100], word[20];
   int count = 0, i;

   printf("Enter a string: ");
   gets(str);

   printf("Enter word to be searched: ");
   gets(word);

   for (i = 0; str[i] != '\0'; i++) {
      if (strstr(&str[i], word) == &str[i]) {
         count++;
      }
   }

   printf("\nCount of \"%s\" is: %d", word, count);

   getch();
   return 0;
}
