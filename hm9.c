#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    if(b == 0) {
        printf("Cannot divide on 0\n");
    }
    else if(a % b == 0){
        printf("Can be divided\n");
    }
    else if(b % a == 0){
        printf("Can be divided\n");
    } else {
        printf("These numbers cannot be divided\n");
    }
    return 0;

}