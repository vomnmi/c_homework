#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);
    printf("Enter the fourth number\n");
    scanf("%d", &d);

    int z = 0;

    if(a + b + c + d == 0) {
        z = a;
        if(b < z && b < c && b < d) {
            z = b;
            
        }
        else if(c < z && c < b && c < d) {
            z = c;
        }
        else {
            z = d;
        }
        printf("%d\n", z);

        return 0;

    }
    
}