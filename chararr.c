#include <stdio.h>
    void array(int x) {  
         int size_array = x;
         printf("Enter the size of array\n");
         scanf("%d", &size_array);
         char user_input[size_array];
         printf("Enter the symbol\n");
         scanf("%s", user_input);
         for(int i = 0; i < size_array; i++) {
            if(user_input[i] > 47 && user_input[i] < 58) {
               printf("%c\n", user_input[i]);
            }
   }
    }
int main() {
   array(5);
      
   
}