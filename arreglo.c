/*
 Arreglos en C (vamos a imprimir el tamaño de acuerdo a lo que el usuario indique)
 */
 #include <stdio.h>
 //función main inicia la ejecución del programa
 int main()
 {
   int sizeA;   //declaramos el tamaño del la variable
   printf("Tamaño del arreglo\n"); //le pedimos al usuario que ingrese el tamaño del arreglo
   scanf("%i",&sizeA);   //leemos lo que ingresa nuestro usuario
   int age[sizeA];   //definimos el arreglo también es un entero
   for (int i = 0;i < sizeA;i++)    //hacemos el ciclo en este caso con for
   {
     printf("Ingresa el valor %i\n",i+1);    //imprimimos que ingresa el valor del usuario
     scanf("%i",&age[i]);
   }
   printf("Los valores del arreglo son:\n");
   for(int i = 0; i < sizeA;i++ )
   {
     printf("%i-\n",age[i]);
   }
   printf("\n");
   return 0;
 }