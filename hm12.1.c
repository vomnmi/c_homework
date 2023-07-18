#include <stdio.h>
int main() {
    int num_user = 0;
    int num_test = 32;
    int result = 0;
    
    printf("Enter the number \n");
    scanf("%d", &num_user);

     result = num_user ^ num_test;
    if(num_user > result) {
        printf("%d\n", num_user);
    }
    else {
        printf("%d\n", result);
    }




    }