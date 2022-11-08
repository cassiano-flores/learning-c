// QUESTÃO C
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i;
 for(i = 20; (i % 8) != 0 ; i--)
 {
 if( i >= 18 ) putchar ('#');
 else putchar ('$');
 }
 return 0;
}
