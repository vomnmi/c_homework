#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int z = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);

    z = b;

    if(a > z) {
        z = a;
    }
    else if( c > z) {
        z = c;
    }
    if ( a == b || a == c || c == b ) {
        printf("Max number is %d\n", z);
    }
    return 0;


}