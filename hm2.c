#include <stdio.h>

int main() {
    /* char sym = 0;

    printf("Type a letter\n");
    scanf("%s", &sym);

    switch (sym) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
        printf("Dzaynavor\n");
        break;
        default:
        printf("Baghadzayn\n");
    }
    */ // Switch Case Tarberak


    char sym[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    char sym1 = 0;
    // printf("Type a letter\n");
    // scanf("%s", &sym1);
    do {
        if(sym1 == 0) {
        printf("Type a letter\n");
        }
        else {
        printf("Incorrect symbol try again\n");
        }
        scanf(" %c", &sym1);

    } while (!((sym1 >= 65 && sym1 <= 90) || (sym1 >= 97 && sym1 <= 122)));
    int not_Vowel = 0;

    for(int i = 0; i < sizeof(sym); i++){

       if(sym1 == sym[i]) {
            printf("Your letter is vowel\n");
            not_Vowel = 1;
            break;
        }
        

    }
    if(!not_Vowel) {
        printf("Your letter is consonant\n");
    }
}