#include <stdio.h>
void arr_elements(int a) {
   int arr[a];
   int i = 0;
   int sum = 0;
while(i < sizeof(arr) / sizeof(arr[0])) {
   printf("Enter number\n");
   scanf("%d", &arr[i]);
   ++i;
}
while (sum < sizeof(arr) / sizeof(arr[0])) {
   printf("%d\n", arr[sum]);
   sum++;
}
}

int main() {
   int user_input = 0;
   printf("Enter the size of array\n");
   scanf("%d", &user_input);
   arr_elements(user_input);
}
   
   