/*
*Variables
*/
#include <stdio.h>
int main()
{
  char C = 'y'; //Tamaño de 1 byte rango es de 0..255
  int a = 20; //2 bytes -32768 ... 32767
  short e = -1; //2 bytess -128 ... 127
  unsigned int u = 25; //2 bytes 0.... 655535
  long l = 5932; //4 bytes -217483648 ... 217483647
  float f = 72.534; // 4 bytes  -217483648 ... 217483647
  printf("El cubo de la variable a es : %i\n", CUBO(a));
  return 0;
}