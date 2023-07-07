#include <stdio.h>

int main()
{
 char sym = 0;
 printf ("Enter your letter (A-Z) \n");
 scanf ("%c", &sym);

if( sym < 'A' || sym > 'Z' )
{
 printf("Wrong Letter! Try again!\n");
}


 while( sym <'A' || sym > 'Z' )
{
 scanf("%c", &sym);
}

 printf("%c\n", sym + 32);
 return 0;
}
 
