// QUESTÃO F
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int matriz[6] = { 4, -3, 2, 3, 8, 2 };
 int i, j, res = 0;
 for(i = 0; i < 6; i++)
 {
 if(matriz[i] >= 2 ) continue;
 j = 5 - i;
 res = res + matriz[j];
 }
 printf("%d", res);
 return 0;
}
