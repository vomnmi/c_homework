#include <stdio.h>

int main() {
   int size = 0;
   printf("Enter the size of square\n");
   scanf("%d", &size);

   for(int i = 0; i < size; i++) {
      printf("* ");
   for(int j = 0; j < (size - 1); j++) {
      if(j == (size - 2) || i == 0 || i == size - 1) {
         printf("* ");
      }else {
      printf("  ");
      }
      
   }
      printf("\n");
   }
}