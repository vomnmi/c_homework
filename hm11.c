#include <stdio.h>
int main() {
    int first_num = 0;
    int sec_num = 0;
    int third_num = 0;

    printf("Enter the first number \n");
    scanf("%d", &first_num);
    printf("Enter the second number \n");
    scanf("%d", &sec_num);
    printf("Enter the third number \n");
    scanf("%d", &third_num);

    int min = 0;
    if((first_num < sec_num) && first_num < third_num) {
        min = first_num;
    }
    else if((sec_num < first_num ) && sec_num < third_num) {
        min = sec_num;
    }
    else if ((third_num < first_num) && third_num < sec_num) {
        min = third_num;
    }
    printf("Minimum number is %d \n", min);

    for(int i = min; i >= 1; i--) {
        if(first_num % i == 0 && sec_num % i == 0 && third_num % i == 0){
            printf("%d \n", i);
            break;
        }

    }
        
}