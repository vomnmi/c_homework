#include <stdio.h>
int main(){ 
    int a = 0;
    int result = 0;
    printf("Type a number\n");
    scanf("%d", &a);

    if(a < 12) {
        printf("Wrong number, try again\n");
        scanf(" %d", &a);
    }
    while(a > 0) {
        result += a % 10;
         a -= a % 10;
         a /= 10;
    }
    printf("%d\n", result);
    }
    
