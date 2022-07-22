//Escribe un programa en C que imprima todas las permutaciones de una cadena, usando apuntadores.

#include <stdio.h>
#include <string.h>

//Intercambia las posiciones de dos caracteres.
void intercambiar(char *ch1, char *ch2){
  char tmp;
  tmp = *ch1;
  *ch1 = *ch2;
  *ch2 = tmp;
}

//Permuta los caracteres de la cadena
void permutar(char *ch, int inicio, int fin){
  int i;
  if (inicio == fin)
      printf("%s  ", ch);
  else{
    for (i = inicio; i <= fin; i++){
      intercambiar((ch+inicio), (ch+i));
      permutar(ch, inicio+1, fin);
      intercambiar((ch+inicio), (ch+i)); 
    }
  }
}
 
int main(){
  char str[] = "hola";
  printf("\n\n Generando permutaciones de la cadena ingresada ... \n"); 
  printf("--------------------------------------------------------\n"); 
  int n = strlen(str);
  printf(" Las permutaciones son: \n");
  permutar(str, 0, n-1);
  printf("\n\n");
  
  return 0;
}