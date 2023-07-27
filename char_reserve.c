#include <stdio.h>

int main() {
         int size_array = 0;
         printf("Enter the size of array\n");
         scanf(" %d", &size_array);
         char user_input[size_array];
         for(int i = 0; i < sizeof(user_input); i++) {
         printf("Enter the symbols\n");
         scanf(" %c", &user_input[i]);
   }
      for(int j = size_array - 1; j >= 0; j-- ) {
         printf("%c", user_input[j]);
      }
       printf("\n");
}