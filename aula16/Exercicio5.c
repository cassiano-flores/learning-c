// QUESTÃO E
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int matriz[6] = { 4, -3, 2, 3, 8, 2 };
 int *p, k;
 p = &matriz[5];
 for(k = 0; k < 2; k++)
 {
 printf("%d", *p);
 p-=2; // p = p - 2
 }
 return 0;
}
