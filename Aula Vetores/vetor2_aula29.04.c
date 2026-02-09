/*Ler a idade de 3 individuos e mostrar  as idades lidas*/
 
#include <stdio.h>
int main(void) {
	
	int idade[3];//quantidade de espaços necessários
	
	printf("Informe a idade: ");
    scanf("%d", &idade[0]);
    
    printf("Informe a idade: ");
    scanf("%d", &idade[1]);
    
    printf("Informe a idade: ");
    scanf("%d", &idade[2]);
    
    //Mostra as idades
      printf("A idade %d", idade[0]);
      printf("A idade %d", idade[1]);
      printf("A idade %d", idade[2]);
    //em colchetes está o indice(posição)do valor armazenado
