// QUESTÃO B
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i, *p;
 p = &i;
 i = 10; *p = 12;
 do
 {
 i = i - 2;
 printf("%d.", i);
 i++;
 }while(i > 0);
 return 0;
}
