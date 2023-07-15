#include <stdio.h>

int main() {
    char sym = 0;
    int i = 0;

    do {
    printf("Please Enter  symbol\n");
    scanf("%s", &sym);

    if(sym >= 48 && sym <= 57) {
        printf("True\n");
    }
    else {
        printf("False\n");
        i++;
    }
} while (!(sym >= 48 && sym <= 57) && i != 5);


    return 0;

}