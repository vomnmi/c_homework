#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    double result = 0;

    printf("Enter Number #1\n");
    scanf("%d", &x);
    printf("Enter Number #2\n");
    scanf("%d", &y);

    result =(double)(21*x+y*x*y)/y- 200;
    printf("Your result is %f", result);

    return 0;


}


