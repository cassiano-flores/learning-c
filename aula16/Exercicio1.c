// QUESTÃO A
#include <stdio.h>
#include <stdlib.h>
void funcao(int a)
{
 int b;
 b = 2;
 if( (a % 2) == 1 ) a--;
 printf("a = %d b = %d\n", a+1, b);
}
int main(void)
{
 int aux = 7;
 funcao(aux+2);
 return 0;
}
