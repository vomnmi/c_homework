#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    if(a > b) {
        printf("Highest number %d\n", a);
    }
    else {
        printf("Highest number %d\n", b);
    }
}