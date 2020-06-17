/*
 Arreglo multidimencional en C 
 */
 #include <stdio.h>
 //función main inicia la ejecución del programa
 int main()
 {
   //col .. 0 1 2
   //fila0| 5 3 1
   //fila1| 6 4 2
   int multi[2][3] ={{5,3,1},{6,4,2}}; //el primer corchote tiene las filas y el segundo columnas
    printf("%i\n",multi[1][1]);
   return 0;
 }