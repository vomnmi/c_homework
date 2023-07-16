#include <stdio.h>
int main() {
    int num = 0;

    printf("Enter the number \n");
    scanf("%d", &num);

    int num1 = 0;
    int num2 = 0;
    num1 = num;
    num2 = num;
    int counter = 0;
    int tru = 0;

    while(num1 >= 1) {
        num1 = num / num1;
        
        printf("%d \n", num1 % 2);
        num1 = num2 / 2;
        num2 = num2 / 2;

        /*if(counter == 4 && num1 % 2 == 0) {
            printf("%d \n", !(num1 % 2));
            tru = 1;
            // continue;
        }
*/
        counter++;

    }
    if(!tru) {
        printf("%d\n", num);
    }
}