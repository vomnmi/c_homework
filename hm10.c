#include <stdio.h>
int main() {
    int year = 0;
    int year1 = 0;
    printf("What year is it?\n");
    scanf("%d", &year);

     if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("is leap year\n");
    }
    else {
        printf("is'nt leap year\n");
    }
    }